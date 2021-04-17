//
// Created by tzvet on 17.4.2021 г..
//

#include "Shape.h"

Shape::Shape(double a):_a(a) {

}

Shape::Shape(const Shape &rhs):_a(rhs._a) {

}

Shape::~Shape() {

}

Shape &Shape::operator=(const Shape &rhs) {
    if(this != &rhs){
        _a = rhs._a;
    }
    return *this;
}

void Shape::setA(double value) {
    if(value > 0) {
        _a = value;
    }
}

std::ostream& operator<<(std::ostream& out, const Shape& rhs){
    out << rhs.getA();

    return out;
}
