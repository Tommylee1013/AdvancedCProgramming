cmake_minimum_required(VERSION 3.26)
project(AdvancedCProgramming C)

set(CMAKE_C_STANDARD 11)

include_directories(Chapter01)

add_executable(AdvancedCProgramming
        Chapter01/Hello.c)
