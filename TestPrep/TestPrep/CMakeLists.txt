﻿# CMakeList.txt : CMake project for TestPrep, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (TestPrep    "main.cpp" "TraceFun.cpp" "TraceFun.h" "CountVar.cpp" "CountVar.h" "RangeVar.h" "RangeVar.cpp" "Ristream.h" "Ristream.cpp")

# TODO: Add tests and install targets if needed.
