cmake_minimum_required(VERSION 3.19)
project(C_disabuse C)

set(CMAKE_C_STANDARD 11)

add_executable(C_disabuse varargs.c 16.20-mems.c 14.1-book.c)
