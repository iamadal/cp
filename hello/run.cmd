@echo off
cmd /c g++ -Wall -fexceptions *.cc -g -c
cmd /c g++ -o main.exe  *.o
main.exe


