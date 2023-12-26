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
