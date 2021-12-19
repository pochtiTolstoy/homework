@echo off
set /a num = 0
:begin
set /a num = num + 1
set /a sqr = i * i
set /a mod = %sqr% %% 1000000
if %mod% equ 269696 (goto end) else (goto begin)


:end
echo %num
