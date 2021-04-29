cmake_minimum_required(VERSION 3.19)
project(TrafficCars)

set(CMAKE_CXX_STANDARD 20)

add_executable(TrafficCars main.cpp Vehicle.cpp Vehicle.h HeavyVehicle.cpp HeavyVehicle.h Automobile.cpp Automobile.h AirVehicle.cpp AirVehicle.h AutomobileArr.cpp AutomobileArr.h)