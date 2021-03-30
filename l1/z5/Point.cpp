//
// Created by tzvet on 30.3.2021 г..
//

#include "Point.h"
#include <iostream>

Point::Point() : _x(0), _y(0), _z(0){ std::cout << "Default Point constructor was called!"; }

Point::Point(float x, float y, float z) : _x(x), _y(y), _z(z){}

Point::~Point(){}

void Point::scale(float a, float b, float c) {
    _x *= a;
    _y *= b;
    _z *= c;
}

void Point::translate(float a, float b, float c) {
    _x += a;
    _y += b;
    _z += c;
}

void Point::printInfo() const {
    std::cout << _x << " " << _y << " " << _z;
}
