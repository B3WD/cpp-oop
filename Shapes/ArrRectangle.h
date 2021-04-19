//
// Created by tzvet on 19.4.2021 г..
//

#ifndef MAIN_CPP_ARRRECTANGLE_H
#define MAIN_CPP_ARRRECTANGLE_H

#include <iostream>
#include "Rectangle.h"

class ArrRectangle {
private:
    unsigned _sz;
    Rectangle * _arr;

public:
    ArrRectangle(unsigned sz = 0, Rectangle *arr = nullptr);
    ArrRectangle(const ArrRectangle& rhs);
    ~ArrRectangle();

    ArrRectangle& operator=(const ArrRectangle& rhs);

};


#endif //MAIN_CPP_ARRRECTANGLE_H
