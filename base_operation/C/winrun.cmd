@echo off

set fout=%~pd0result.md
set run=%~pd0run.exe 

type nul > %fout%

:: 

call gcc %~pd0main.c -o %run%
call %run% gcc >> %fout%


call g++ %~pd0main.c -o %run%
call %run% g++ >> %fout%

:: O1

::call gcc %~pd0main.c -O -o %run%
::call %run% "gcc -O" >> %fout%

call gcc %~pd0main.c -O1 -o %run%
call %run% "gcc -O1" >> %fout%

::call g++ %~pd0main.c -O -o %run%
::call %run% "g++ -O" >> %fout%

call g++ %~pd0main.c -O1 -o %run%
call %run% "g++ -O1" >> %fout%


:: O2

call gcc %~pd0main.c -O2 -o %run%
call %run% "gcc -O2" >> %fout%

call g++ %~pd0main.c -O2 -o %run%
call %run% "g++ -O2" >> %fout%

:: O3

call gcc %~pd0main.c -O3 -o %run%
call %run% "gcc -O3" >> %fout%

call g++ %~pd0main.c -O3 -o %run%
call %run% "g++ -O3" >> %fout%