@echo off
mkdir %1
mkdir %1\\BasicsOfProgramming
mkdir %1\\Algem
mkdir %1\\MathAnalysis
mkdir %1\\DiscreteMath
echo Лекции: Погожев Сергей Владимирович. > %1\\Algem\\readme.txt
echo Практика: Балыкина Юлия Ефимовна >> %1\\Algem\\readme.txt 
echo Начало занятий: %date% >> %1\\Algem\\readme.txt

rem 1echo Лекции: Платонов Алексей Викторович. > %1\\MathAnalysis\\readme.txt 
echo Практика: Мышков Станислав Константинович >> %1\\MathAnalysis\\readme.txt
echo Начало занятий: %date% >> %1\\MathAnalysis\\readme.txt

echo Лекции: Погожев Сергей Владимирович. > %1\\DiscreteMath\\readme.txt 
echo Практика: Воронкова Ева Боруховна >> %1\\DiscreteMath\\readme.txt
echo Начало занятий: %date% >> %1\\DiscreteMath\\readme.txt

echo Лекции: Погожев Сергей Владимирович. > %1\\BasicsOfProgramming\\readme.txt 
echo Начало занятий: %date% >> %1\\BasicsOfProgramming\\readme.txt

copy op.bat %1\\BasicsOfProgramming

copy algem.bat %1\\Algem
