cmake_minimum_required(VERSION 3.17)
project(z5)

set(CMAKE_CXX_STANDARD 20)

add_executable(z5 main.cpp Point.cpp Point.h pointArray.cpp pointArray.h)