//
// Created by tzvet on 30.3.2021 г..
//

#ifndef Z5_POINTARRAY_H
#define Z5_POINTARRAY_H

#include "Point.h"

class pointArray {
private:
    unsigned _pointCount;
    Point *_pointArr;

public:
    pointArray();
    pointArray(int pointCount);
    ~pointArray();

    void printPoints() const;
    void scale(float a, float b, float c);
    void translate(float a, float b, float c);
};


#endif //Z5_POINTARRAY_H
