@echo off 
echo -----删除vscode文件-----
set path=%~dp0
rd /s /q %path%..\.vscode
echo -----删除vscode完成-----