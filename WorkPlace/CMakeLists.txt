cmake_minimum_required(VERSION 3.17)
project(WorkPlace)

set(CMAKE_CXX_STANDARD 20)

add_executable(WorkPlace main.cpp Employee.cpp Employee.h Manager.cpp Manager.h Executive.cpp Executive.h)