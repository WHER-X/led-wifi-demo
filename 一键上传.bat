@echo off
cd /d "%~dp0"
set "GIT=D:\Git\cmd\git.exe"
echo ==========================================
echo   一键上传到 GitHub
echo ==========================================
echo.
%GIT% status --short
echo.
set "msg="
set /p msg=请输入这次改动的说明，直接回车等于日常更新: 
if "%msg%"=="" set "msg=日常更新"
%GIT% add .
%GIT% commit -m "%msg%"
%GIT% push
if errorlevel 1 goto fail
echo.
echo [成功] 已上传，打开 GitHub 仓库刷新即可看到。
goto end
:fail
echo.
echo [失败] 上传没成功，常见原因：
echo   1 还没关联仓库地址，先执行 git remote add origin 地址
echo   2 云端有新内容，先执行 git pull origin main 再试
echo   3 登录窗口被关掉了，重跑本脚本会再弹一次
:end
echo.
pause
