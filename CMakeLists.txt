cmake_minimum_required(VERSION 3.7)
project(calcspace)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES calcspacetabstr.c)
add_executable(calcspace ${SOURCE_FILES})