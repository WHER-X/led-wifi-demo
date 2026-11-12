@echo off
cd /d "%~dp0"
set "GIT=D:\Git\cmd\git.exe"
echo ==========================================
echo   一键上传到 GitHub
echo   文件夹: %CD%
echo ==========================================
echo.
%GIT% remote get-url origin >nul 2>&1
if errorlevel 1 goto setremote
goto stage

:setremote
echo [首次使用] 还没关联 GitHub 仓库地址
echo 在 GitHub 网页建好空仓库后，复制它的地址粘贴到这里
echo 形如 https://github.com/你的用户名/led-wifi-demo.git
echo.
set "url="
set /p url=仓库地址: 
if "%url%"=="" goto norepo
%GIT% remote add origin "%url%"
echo.

:stage
%GIT% status --short
echo.
set "msg="
set /p msg=这次改了什么，直接回车等于日常更新: 
if "%msg%"=="" set "msg=日常更新"
%GIT% add .
%GIT% commit -m "%msg%"
%GIT% push
if errorlevel 1 goto fail
echo.
echo [成功] 已上传，打开 GitHub 仓库页面刷新即可看到。
goto end

:fail
echo.
echo [失败] 没上传成功，常见原因:
echo   1 弹窗要你登录 GitHub，选 Sign in with your browser 并完成授权
echo   2 云端有网页上新改的内容，先执行 git pull origin main 再重试
echo   3 仓库地址填错了，执行 git remote set-url origin 新地址 覆盖
goto end

:norepo
echo 没填地址，已退出。建好仓库后重新双击本脚本即可。

:end
echo.
pause
