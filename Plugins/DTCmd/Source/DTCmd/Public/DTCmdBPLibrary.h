// Copyright 2023 Dexter.Wan. All Rights Reserved. 
// EMail: 45141961@qq.com

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "DTCmdBPLibrary.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FDTCmdProcess, const FString&, Process);
DECLARE_DYNAMIC_DELEGATE_OneParam(FDTCmdResult, const FString&, Result);

UENUM()
enum class EDTCmdCharacter : uint8
{
	ACP = 0 UMETA(DisplayName = "CP_ACP", ToolTip = "default to ANSI code page"),
	OEMCP = 1 UMETA(DisplayName = "CP_OEMCP", ToolTip = "default to OEM code page"),
	MACCP = 2 UMETA(DisplayName = "CP_MACCP", ToolTip = "default to MAC code page"),
	THREAD_ACP = 3 UMETA(DisplayName = "CP_THREAD_ACP", ToolTip = "current thread's ANSI code page"),
	SYMBOL = 4 UMETA(DisplayName = "CP_SYMBOL", ToolTip = "SYMBOL translations"),
	UTF7 = 5 UMETA(DisplayName = "CP_UTF7", ToolTip = "UTF-7 translation"),
	UTF8 = 6 UMETA(DisplayName = "CP_UTF8", ToolTip = "UTF-8 translation"),
};


UCLASS( meta=(DisplayName="DT CMD") )
class UDTCmdBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
	
	UFUNCTION(BlueprintCallable, Category="DT Cmd", meta=(Latent, WorldContext="WorldContextObject", CodePage = "OEMCP", LatentInfo="LatentInfo", DisplayName="Exec CMD", Keywords="cmd,execcmd"))
	static void ExecCMD(const UObject* WorldContextObject, const FString & Cmd, EDTCmdCharacter CodePage, FString & Result, struct FLatentActionInfo LatentInfo);

	UFUNCTION(BlueprintCallable, Category="DT Cmd", meta=(Latent, WorldContext="WorldContextObject", CodePage = "OEMCP", LatentInfo="LatentInfo", DisplayName="Exec CMD (Have Process)", Keywords="cmd,execcmd"))
	static void ExecCMDHaveProcess(const UObject* WorldContextObject, const FString & Cmd, EDTCmdCharacter CodePage, const FDTCmdProcess Process, FString & Result, struct FLatentActionInfo LatentInfo);
};
