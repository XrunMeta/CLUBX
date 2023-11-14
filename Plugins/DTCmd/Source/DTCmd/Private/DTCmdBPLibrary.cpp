// Copyright 2023 Dexter.Wan. All Rights Reserved. 
// EMail: 45141961@qq.com

#include "DTCmdBPLibrary.h"
#include "LatentActions.h"
#include "Async/Async.h"
#include "Windows/AllowWindowsPlatformAtomics.h"
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/PreWindowsApi.h"
#include "Windows.h"
#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformTypes.h"
#include "Windows/HideWindowsPlatformAtomics.h"

#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Core/Public/Async/AsyncWork.h"
#include <string>

class FDTCmdDelayAction : public FPendingLatentAction
{
public:
	
	// 系统回调函数
	int32 OutputLink;
	FName ExecutionFunction;
	FWeakObjectPtr CallbackTarget;
	
	// 函数返回值
	FString& Result;
	
	// 结束运行
	bool IsOver;

	FDTCmdDelayAction(FString & _Result, const FLatentActionInfo& _LatentInfo)
		: OutputLink(_LatentInfo.Linkage)
		, ExecutionFunction(_LatentInfo.ExecutionFunction)
		, CallbackTarget(_LatentInfo.CallbackTarget)
		, Result(_Result)
		, IsOver(false)
	{
	}

	virtual void UpdateOperation(FLatentResponse& Response) override
	{
		Response.FinishAndTriggerIf(IsOver, ExecutionFunction, OutputLink, CallbackTarget);
	}

	// 结束回调函数
	void OnOver(FString _Result)
	{
		Result = _Result;
		IsOver = true;
	}
};

// 延迟线程
class FDTCmdAsyncTask : public FNonAbandonableTask
{
	friend class FAsyncTask<FDTCmdAsyncTask>;

private:
	FString				Cmd;
	UINT				CodePage;
	FDTCmdProcess		Process;
	FDTCmdDelayAction * DTCmdDelayAction;
	
public:
	// 初始化
	FDTCmdAsyncTask(const FString & _Cmd, UINT _CodePage, const FDTCmdProcess _Process, FDTCmdDelayAction * _DTCmdDelayAction)
		: Cmd(_Cmd), CodePage(_CodePage), Process(_Process), DTCmdDelayAction(_DTCmdDelayAction) {}
	
	// 线程标识
	FORCEINLINE TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(FDTCmdAsyncTask, STATGROUP_ThreadPoolAsyncTasks);}
	// 延迟线程
	void DoWork()
	{
		FString szResult;
		std::string cmd = TCHAR_TO_UTF8(*Cmd);
		FILE* pPipe = _popen(cmd.c_str(), "rt");
		if (pPipe == nullptr)
		{
			AsyncTask(ENamedThreads::GameThread, [DTCmdDelayAction = DTCmdDelayAction]()
			{
				DTCmdDelayAction->OnOver(TEXT(""));
			});
			return;
		}

		constexpr int nMaxCount = 2046;
		char szBuffer[nMaxCount + 1] = { 0 };
		while ( fgets(szBuffer, nMaxCount, pPipe) )
		{
			wchar_t outChar[nMaxCount + 1] = { 0 };
			MultiByteToWideChar(CodePage, 0, szBuffer, -1, outChar, nMaxCount );
			FString szProcess = outChar;
			AsyncTask(ENamedThreads::GameThread, [Process = Process, szProcess]()
			{
				Process.ExecuteIfBound(szProcess);
			});
			
			szResult += szProcess;
			memset(szBuffer, 0, sizeof(szBuffer));
		}
	
		_pclose(pPipe);
		AsyncTask(ENamedThreads::GameThread, [DTCmdDelayAction = DTCmdDelayAction, szResult]()
		{
			DTCmdDelayAction->OnOver(szResult);
		});
	}
};

UDTCmdBPLibrary::UDTCmdBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UDTCmdBPLibrary::ExecCMD(const UObject* WorldContextObject, const FString& Cmd, EDTCmdCharacter CodePage, FString & Result, FLatentActionInfo LatentInfo)
{
	ExecCMDHaveProcess(WorldContextObject, Cmd, CodePage, FDTCmdProcess(), Result, LatentInfo);
}

void UDTCmdBPLibrary::ExecCMDHaveProcess(const UObject* WorldContextObject, const FString& Cmd, EDTCmdCharacter CodePage, const FDTCmdProcess Process, FString& Result, FLatentActionInfo LatentInfo)
{
	UINT uCodePage = CP_OEMCP;
	switch (CodePage)
	{
	case EDTCmdCharacter::ACP:
		uCodePage = CP_ACP;
		break;
	case EDTCmdCharacter::OEMCP:
		uCodePage = CP_OEMCP;
		break;
	case EDTCmdCharacter::MACCP:
		uCodePage = CP_MACCP;
		break;
	case EDTCmdCharacter::THREAD_ACP:
		uCodePage = CP_THREAD_ACP;
		break;
	case EDTCmdCharacter::SYMBOL:
		uCodePage = CP_SYMBOL;
		break;
	case EDTCmdCharacter::UTF7:
		uCodePage = CP_UTF7;
		break;
	case EDTCmdCharacter::UTF8:
		uCodePage = CP_UTF8;
		break;
	}
	
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		if (LatentActionManager.FindExistingAction<FDTCmdDelayAction>(LatentInfo.CallbackTarget, LatentInfo.UUID) == NULL)
		{
			FDTCmdDelayAction * pDTCmdDelayAction = new FDTCmdDelayAction(Result, LatentInfo);
			( new FAutoDeleteAsyncTask< FDTCmdAsyncTask >( Cmd, uCodePage, Process, pDTCmdDelayAction ) )->StartBackgroundTask();
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, pDTCmdDelayAction);
		}
	}
}


