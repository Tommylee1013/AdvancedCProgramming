cmake_minimum_required(VERSION 3.26)
project(AdvancedCProgramming C)

set(CMAKE_C_STANDARD 11)

include_directories(Chapter01)

add_executable(AdvancedCProgramming
        Chapter01/Hello.c
        Chapter02/IntSize.c
        Chapter02/FloatingPoint.c
        Chapter02/Declaration.c
        Chapter02/SizeOfChar.c
        Chapter02/InputFunction.c
        Chapter02/Exercise02.c
        Chapter02/Exercise03.c)
add_executable(Chap02Exercise03 Chapter02/Exercise03.c)
add_executable(H2_1 Chapter02/H2_1.c)
add_executable(H2_2 Chapter02/H2_2.c)
add_executable(Chap03Expression Chapter03/Expression.c)
add_executable(Chap03Exercise Chapter03/Exercise01.c)
add_executable(Chap03Exercise02 Chapter03/Exercise02.c)
add_executable(Chap03Exercise03 Chapter03/Exercise03.c)
add_executable(PrintAndScan Chapter03/PrintAndScan.c)
add_executable(H3_1 Chapter03/H3_1.c)
add_executable(H3_2 Chapter03/H3_2.c)
add_executable(H3_3 Chapter03/H3_3.c)
add_executable(Chap04Swap Chapter04/SwapBiDirection.c)
add_executable(P4_1 Chapter04/P4_1.c)
add_executable(Chap04StackFrame Chapter04/StackFrame.c)
add_executable(Chap04Scope Chapter04/Scope.c)
add_executable(Chap04StorageClass Chapter04/StorageClass.c
        Chapter04/out.c)
add_executable(P4_4 Chapter04/P4_4.c)
add_executable(Chap04Math Chapter04/MathLib.c)
add_executable(Chap04StdLib Chapter04/StdLibExample.c)
add_executable(Chap04Program Chapter04/P4_9RandomNumbers.c)
add_executable(Chap04PseudoRandom Chapter04/P4_10PseudoRandomNumbers.c)
add_executable(Chap04RandomNumberRange Chapter04/P4_11RandomNumberRange.c)
add_executable(Chap04GenerateRandomReal Chapter04/P4_12GenerateRandomReal.c)
add_executable(Chap04Calculator Chapter04/P4_3Calculator.c)
add_executable(Chap04RecursiveFunc Chapter04/RecursiveFunction.c)
add_executable(H4_1 Chapter04/H4_1.c)
add_executable(H4_2 Chapter04/H4_2.c)
add_executable(H4_3 Chapter04/H4_3.c)
