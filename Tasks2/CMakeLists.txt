cmake_minimum_required(VERSION 3.19)
project(l4t)

set(CMAKE_CXX_STANDARD 20)

add_executable(l4t main.cpp Tasks.cpp Tasks.h)