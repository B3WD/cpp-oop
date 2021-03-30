//
// Created by tzvet on 30.3.2021 г..
//

#include "pointArray.h"
#include <iostream>

pointArray::pointArray(){
    std::cout << "Default pointArr was called.\n";
    _pointCount = 0;
    _pointArr = new Point[_pointCount];

}

pointArray::pointArray(int pointCount){
    float x, y, z;

    _pointCount = pointCount;
    _pointArr = new Point[_pointCount];

    for(int i = 0; i < _pointCount; i++){
        std::cout << std::endl << "Enter x, y, z: ";
        std::cin >> x >> y >> z;
        _pointArr[i] = Point(x, y, z);
    }
}

pointArray::~pointArray(){
    if(_pointArr != nullptr){
        delete [] _pointArr;
    }
}

void pointArray::printPoints() const {
    for(int i = 0; i < _pointCount; i++){
        _pointArr[i].printInfo();
        std::cout << std::endl;
    }
}

void pointArray::scale(float a, float b, float c) {
    for(int i = 0; i < _pointCount; i++){
        _pointArr[i].scale(a, b, c);
    }
}

void pointArray::translate(float a, float b, float c) {
    for(int i = 0; i < _pointCount; i++){
        _pointArr[i].translate(a, b, c);
    }
}
