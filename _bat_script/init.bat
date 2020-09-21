@echo off 
echo ## 即将删除生成的exe文件和vscode文件 ##
set path=%~dp0
call %path%\del_exe.bat
call %path%\del_vscode.bat
echo ## 初始化完成 ##