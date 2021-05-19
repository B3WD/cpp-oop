//
// Created by tzvet on 17.4.2021 г..
//

#ifndef SHAPES_SHAPE_H
#define SHAPES_SHAPE_H

#include <iostream>
#include "Point.h"

class Shape {
private:
    double _a;
    Point _p1;

public:
    Shape(double a = 0);
    Shape(Point p1);
    Shape(const Shape& rhs);
    ~Shape();

    Shape& operator=(const Shape& rhs);

    double getA() const { return _a; };
    void setA(double value);

    virtual std::ostream& ins(std::ostream &out) const;
    virtual std::istream& ext(std::istream &in);

    virtual double P() const = 0;
    virtual double S() const = 0;
};

std::ostream& operator<<(std::ostream& out, const Shape& rhs);
std::istream& operator>>(std::istream &in, Shape& rhs);

#endif //SHAPES_SHAPE_H
