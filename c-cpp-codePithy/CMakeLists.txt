cmake_minimum_required(VERSION 3.16)
project(7_1)

##官方标准配置
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-rtti -fno-exceptions -fPIC -Wall")


add_executable(7_1 11.3/date.h 11.3/date.cpp 11.3/tdate.cpp)