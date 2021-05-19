//
// Created by tzvet on 17.4.2021 г..
//

#include "Shape.h"

Shape::Shape(double a):_a(a) {

}

Shape::Shape(Point p1):_a(0), _p1(p1)
{
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

std::ostream& Shape::ins(std::ostream &out) const
{   
    out << _a;
    return out;
}

std::istream& Shape::ext(std::istream& in)
{
    in >> _a;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Shape& rhs){

    return rhs.ins(out);
}

std::istream& operator>>(std::istream &in, Shape &rhs)
{
    return rhs.ext(in);
}
