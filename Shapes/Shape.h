//
// Created by tzvet on 17.4.2021 г..
//

#ifndef SHAPES_SHAPE_H
#define SHAPES_SHAPE_H

#include <iostream>

class Shape {
private:
    double _a;
public:
    Shape(double a = 0);
    Shape(const Shape& rhs);
    ~Shape();

    Shape& operator=(const Shape& rhs);

    double getA() const { return _a; };
    void setA(double value);

    double P() const { return 0; };
    double S() const { return 0; };
};

std::ostream& operator<<(std::ostream& out, const Shape& rhs);

#endif //SHAPES_SHAPE_H
