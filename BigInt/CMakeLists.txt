cmake_minimum_required(VERSION 3.19)
project(z3)

set(CMAKE_CXX_STANDARD 20)

add_executable(z3 main.cpp BigInteger.cpp BigInteger.h)