cmake_minimum_required(VERSION 4.0)
project(rgb_hexparser_uge38 C)

set(CMAKE_C_STANDARD 23)

add_executable(rgb_hexparser_uge38 main.c
        rgb.c
        rgb.h)
