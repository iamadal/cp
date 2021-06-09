@echo off
g++ -Wall -fexceptions -g -c *.cc
g++ -o  init.exe  *.o
init.exe
echo .
pause