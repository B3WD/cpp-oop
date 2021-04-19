//
// Created by tzvet on 17.4.2021 г..
//

#ifndef SHAPES_SQUARE_H
#define SHAPES_SQUARE_H

#include "Shape.h"

class Square: public Shape{
public:
    Square(double a = 0);
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
