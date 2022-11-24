cmake_minimum_required(VERSION 3.24)
project(cifrarioDiCesare C)

set(CMAKE_C_STANDARD 99)

add_executable(cifrarioDiCesare main.c cesar_function.h constants.h cesar_function.c menu.h menu.c)