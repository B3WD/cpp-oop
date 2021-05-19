//
// Created by tzvet on 17.4.2021 г..
//

#ifndef SHAPES_SQUARE_H
#define SHAPES_SQUARE_H

#include "Shape.h"

class Square: public Shape{
private:
    Point _p2;

public:
    Square(double a = 0);
    Square(Point p1, Point p2);
    Square(const Square& rhs);
    ~Square();

    Square& operator=(const Square& rhs);

    bool operator>(const Square& rhs) const;
    bool operator<(const Square& rhs) const;

    double P() const;
    double S() const;
};

// std::ostream& operator<<(std::ostream& out, const Square& rhs);

#endif //SHAPES_SQUARE_H
