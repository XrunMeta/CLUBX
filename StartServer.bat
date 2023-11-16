@echo off

::REMEMBER TO SET ENGINE PATH

SET ENGINEPATH="C:\ue521sb\Engine\Binaries\Win64\UnrealEditor.exe"
SET UPROJECTPATH="D:\UnrealProjects\tri_Clubx_v2_Git\ClubX.uproject"

::ECHO Lauching Client 1...
::start "Client 1" %ENGINEPATH% %UPROJECTPATH% CX_MainMenuMap -game -log -ResX=960 -ResY=540 -windowed -r.SetRes 960x540w
::start "Client 2" %ENGINEPATH% %UPROJECTPATH% CX_MainMenuMap -game -log -ResX=960 -ResY=540 -windowed -r.SetRes 960x540w
::start "Client 3" %ENGINEPATH% %UPROJECTPATH% CX_MainMenuMap -game -log -ResX=960 -ResY=540 -windowed -r.SetRes 960x540w

ECHO Lauching the dedicated game server...
start "Local DS Test" %ENGINEPATH% %UPROJECTPATH% GameMenu -server -log

exit /B 0