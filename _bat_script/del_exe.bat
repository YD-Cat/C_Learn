@echo off 
echo -----删除exe文件-----
set path=%~dp0
del /a /s /f /q %path%..\*.exe
echo -----删除exe完成-----