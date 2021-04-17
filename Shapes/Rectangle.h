//
// Created by tzvet on 17.4.2021 г..
//

#ifndef SHAPES_RECTANGLE_H
#define SHAPES_RECTANGLE_H

#include "Square.h"

class Rectangle: public Square{
private:
    double _b;
public:
    Rectangle(double a = 0, double b = 0);
    Rectangle(const Rectangle& rhs);
    ~Rectangle();

    double getB() const { return _b; };
    void setB(double b);

    double P() const;
    double S() const;

    bool operator>(const Rectangle& rhs) const;
    bool operator<(const Rectangle& rhs) const;

    std::ostream& ins(std::ostream& out) const;

    Rectangle& operator=(const Rectangle& rhs);
};

std::ostream& operator<<(std::ostream& out, const Rectangle& rhs);

#endif //SHAPES_RECTANGLE_H
