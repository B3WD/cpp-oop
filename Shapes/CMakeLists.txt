cmake_minimum_required(VERSION 3.18)
project(Shapes)

set(CMAKE_CXX_STANDARD 20)

add_executable(Shapes main.cpp Shape.cpp Shape.h Square.cpp Square.h Rectangle.cpp Rectangle.h ArrRectangle.cpp ArrRectangle.h "Point.h" "Point.cpp")