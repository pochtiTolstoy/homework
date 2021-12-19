@echo off
set nul = 0
set /a year = %1
set /a four=%year% %% 4
set /a hund=%year% %% 100
set /a fourth=%year% %% 400

if %four% equ %nul% (goto c1) else (goto falseans)
:c1
if %hund% neq %nul% (goto trueans) else (goto c2)
c2:
if %fourth% equ %nul% (goto trueans) else (goto falseans)

:trueans
echo yes
goto break

:falseans
echo not a leap year
:break

pause
