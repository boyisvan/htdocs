@echo off

:: BatchGotAdmin
:————————————-
REM –> Check for permissions
>nul 2>&1 “%SYSTEMROOT%\system32\cacls.exe” “%SYSTEMROOT%\system32\config\system”

REM –> If error flag set, we do not have admin.
if ‘%errorlevel%’ NEQ ‘0’ (
echo Requesting administrative privileges…
goto UACPrompt
) else ( goto gotAdmin )

:UACPrompt
echo Set UAC = CreateObject^(“Shell.Application”^) > “%temp%\getadmin.vbs”
set params = %*:”=””
echo UAC.ShellExecute “cmd.exe”, “/c %~s0 %params%”, “”, “runas”, 1 >> “%temp%\getadmin.vbs”

“%temp%\getadmin.vbs”
del “%temp%\getadmin.vbs”
exit /B

:gotAdmin
pushd “%CD%”
CD /D “%~dp0”
:————————————–

@echo off
title PC FAQ MINH PHUONG LOGISTICS VERSION 1

:menu
cls
echo ——————————————————————————–
echo PC Cleanup Utility – Sua cac loi thong dung
echo ——————————————————————————–
echo.
echo Select a tool – Chon yeu cau sua loi
echo =============
echo.
echo [1] Delete Internet Cookies – Sua cac loi dang nhap Website
echo [2] Delete Temporary Internet Files -Tang toc duyet Web
echo [3] Disk Cleanup – Tang toc do may tinh
echo [4] Disk Defragment – Chong phan manh o cung
echo [5] Delete Temporary Files – Xoa Files tam giup nhe may
echo [6] Reset Internet – Sua loi mat ket noi Internet
echo [7] Re-mapping Drive – Ket noi lai o dia chia se
echo [8] Restart PC – Fix cac loi treo may, update
echo [9] Exit – Thoat
echo.
set /p op=Run:
if %op%==1 goto 1
if %op%==2 goto 2
if %op%==3 goto 3
if %op%==4 goto 4
if %op%==5 goto 5
if %op%==6 goto 6
if %op%==7 goto 7
if %op%==8 goto 8
if %op%==9 goto exit
goto error
:1
cls
echo ——————————————————————————–
echo Delete Internet Cookies
echo ——————————————————————————–
echo.
echo Deleting Cookies…
ping localhost -n 3 >nul
del /f /q “%userprofile%\Cookies\*.*”
cls
echo ——————————————————————————–
echo Delete Internet Cookies
echo ——————————————————————————–
echo.
echo Cookies deleted.
echo.
echo Press any key to return to the menu. . .
pause >nul
goto menu
:2
cls
echo ——————————————————————————–
echo Delete Temporary Internet Files
echo ——————————————————————————–
echo.
echo Deleting Temporary Files…
ping localhost -n 3 >nul
del /f /q “%userprofile%\AppData\Local\Microsoft\Windows\Temporary Internet Files\*.*”
cls
echo ——————————————————————————–
echo Delete Temporary Internet Files
echo ——————————————————————————–
echo.
echo Temporary Internet Files deleted.
echo.
echo Press any key to return to the menu. . .
pause >nul
goto menu
:3
cls
echo ——————————————————————————–
echo Disk Cleanup
echo ——————————————————————————–
echo.
echo Running Disk Cleanup…
ping localhost -n 3 >nul
if exist “C:\WINDOWS\temp”del /f /q “C:WINDOWS\temp\*.*”
if exist “C:\WINDOWS\tmp” del /f /q “C:\WINDOWS\tmp\*.*”
if exist “C:\tmp” del /f /q “C:\tmp\*.*”
if exist “C:\temp” del /f /q “C:\temp\*.*”
if exist “%temp%” del /f /q “%temp%\*.*”
if exist “%tmp%” del /f /q “%tmp%\*.*”
if not exist “C:\WINDOWS\Users\*.*” goto skip
if exist “C:\WINDOWS\Users\*.zip” del “C:\WINDOWS\Users\*.zip” /f /q
if exist “C:\WINDOWS\Users\*.exe” del “C:\WINDOWS\Users\*.exe” /f /q
if exist “C:\WINDOWS\Users\*.gif” del “C:\WINDOWS\Users\*.gif” /f /q
if exist “C:\WINDOWS\Users\*.jpg” del “C:\WINDOWS\Users\*.jpg” /f /q
if exist “C:\WINDOWS\Users\*.png” del “C:\WINDOWS\Users\*.png” /f /q
if exist “C:\WINDOWS\Users\*.bmp” del “C:\WINDOWS\Users\*.bmp” /f /q
if exist “C:\WINDOWS\Users\*.avi” del “C:\WINDOWS\Users\*.avi” /f /q
if exist “C:\WINDOWS\Users\*.mpg” del “C:\WINDOWS\Users\*.mpg” /f /q
if exist “C:\WINDOWS\Users\*.mpeg” del “C:\WINDOWS\Users\*.mpeg” /f /q
if exist “C:\WINDOWS\Users\*.ra” del “C:\WINDOWS\Users\*.ra” /f /q
if exist “C:\WINDOWS\Users\*.ram” del “C:\WINDOWS\Users\*.ram”/f /q
if exist “C:\WINDOWS\Users\*.mp3” del “C:\WINDOWS\Users\*.mp3” /f /q
if exist “C:\WINDOWS\Users\*.mov” del “C:\WINDOWS\Users\*.mov” /f /q
if exist “C:\WINDOWS\Users\*.qt” del “C:\WINDOWS\Users\*.qt” /f /q
if exist “C:\WINDOWS\Users\*.asf” del “C:\WINDOWS\Users\*.asf” /f /q
:skip
if not exist C:\WINDOWS\Users\Users\*.* goto skippy /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.zip del C:\WINDOWS\Users\Users\*.zip /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.exe del C:\WINDOWS\Users\Users\*.exe /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.gif del C:\WINDOWS\Users\Users\*.gif /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.jpg del C:\WINDOWS\Users\Users\*.jpg /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.png del C:\WINDOWS\Users\Users\*.png /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.bmp del C:\WINDOWS\Users\Users\*.bmp /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.avi del C:\WINDOWS\Users\Users\*.avi /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mpg del C:\WINDOWS\Users\Users\*.mpg /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mpeg del C:\WINDOWS\Users\Users\*.mpeg /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.ra del C:\WINDOWS\Users\Users\*.ra /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.ram del C:\WINDOWS\Users\Users\*.ram /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mp3 del C:\WINDOWS\Users\Users\*.mp3 /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.asf del C:\WINDOWS\Users\Users\*.asf /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.qt del C:\WINDOWS\Users\Users\*.qt /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mov del C:\WINDOWS\Users\Users\*.mov /f /q
:skippy
if exist “C:\WINDOWS\ff*.tmp” del C:\WINDOWS\ff*.tmp /f /q
if exist C:\WINDOWS\ShellIconCache del /f /q “C:\WINDOWS\ShellI~1\*.*”
cls
echo ——————————————————————————–
echo Disk Cleanup
echo ——————————————————————————–
echo.
echo Disk Cleanup successful!
echo.
pause
goto menu
:4
cls
echo ——————————————————————————–
echo Disk Defragment
echo ——————————————————————————–
echo.
echo Defragmenting hard disks…
ping localhost -n 3 >nul
defrag d: /a
pause
echo ——————————————————————————–
echo Disk Defragment
echo ——————————————————————————–
echo.
echo Disk Defrag successful!
echo.
pause
goto menu
:error
cls
echo Command not recognized.
ping localhost -n 4 >nul
goto menu
:5
cls
echo ——————————————————————————–
echo Delete Temporary Files
echo ——————————————————————————–
echo.
echo Deleting Temporary Files…
ping localhost -n 3 >nul
del /s /f /q %windir%\temp\*.*
rd /s /q %windir%\temp
md %windir%\temp
del /s /f /q %windir%\Prefetch\*.*
rd /s /q %windir%\Prefetch
md %windir%\Prefetch
del /s /f /q %windir%\system32\dllcache\*.*
rd /s /q %windir%\system32\dllcache
md %windir%\system32\dllcache
del /s /f /q “%SysteDrive%\Temp”\*.*
rd /s /q “%SysteDrive%\Temp”
md “%SysteDrive%\Temp”
del /s /f /q %temp%\*.*
rd /s /q %temp%
md %temp%
del /s /f /q “%USERPROFILE%\Local Settings\History”\*.*
rd /s /q “%USERPROFILE%\Local Settings\History”
md “%USERPROFILE%\Local Settings\History”
del /s /f /q “%USERPROFILE%\Local Settings\Temporary Internet Files”\*.*
rd /s /q “%USERPROFILE%\Local Settings\Temporary Internet Files”
md “%USERPROFILE%\Local Settings\Temporary Internet Files”
del /s /f /q “%USERPROFILE%\Local Settings\Temp”\*.*
rd /s /q “%USERPROFILE%\Local Settings\Temp”
md “%USERPROFILE%\Local Settings\Temp”
del /s /f /q “%USERPROFILE%\Recent”\*.*
rd /s /q “%USERPROFILE%\Recent”
md “%USERPROFILE%\Recent”
del /s /f /q “%USERPROFILE%\Cookies”\*.*
rd /s /q “%USERPROFILE%\Cookies”
md “%USERPROFILE%\Cookies”
cls
echo ——————————————————————————–
echo Delete Temporary Files
echo ——————————————————————————–
echo.
echo Temporary Files deleted.
echo.
echo Press any key to return to the menu. . .
pause >nul
goto menu
:6
cls
echo ——————————————————————————–
echo Reset Internet
echo ——————————————————————————–
echo.
echo Reseting Internet…
ping localhost -n 3 >nul
ipconfig /release
ipconfig /renew
ipconfig /flushdns
ipconfig /registerdns
netsh dump
nbtstat -R
netsh int ip reset reset.log
netsh winsock reset
pause
echo ——————————————————————————–
echo Reset Network
echo ——————————————————————————–
echo.
echo Reset Network successful!
echo.
pause
goto menu
:7
cls
reg add “HKEY_LOCAL_MACHINE\Software\Microsoft\Windows\CurrentVersion\Policies\System” /v “EnableLinkedConnections” /t REG_DWORD /d 0x00000001 /f
net stop LanmanWorkstation
net start LanmanWorkstation
start za.bat
echo ——————————————————————————–
echo Re-Mapping Shared Drive…
echo ——————————————————————————–
echo.
echo Re-Mapping Successful!
echo.
pause
goto menu
:error
cls
echo Command not recognized.
ping localhost -n 4 >nul
goto menu

:8
cls
shutdown -f -r -t 0
echo ——————————————————————————–
echo Restarting PC …
echo ——————————————————————————–
echo.
echo Restart PC Successful!
echo.
pause
goto menu
:error
cls
echo Command not recognized.
ping localhost -n 4 >nul
goto menu
:exit
echo Thanks for using PC Cleanup Utility from MPL IT
ping 127.0.0.1 >nul
exit