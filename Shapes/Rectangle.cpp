//
// Created by tzvet on 17.4.2021 г..
//

#include "Rectangle.h"

Rectangle::Rectangle(double a, double b): Square(a), _b(b){

}

Rectangle::Rectangle(Point p1, Point p2): Square(p1, p2)
{
    _b = abs(p1.getY() - p2.getY());
}

Rectangle::Rectangle(const Rectangle& rhs): Square(rhs), _b(rhs._b){

}

Rectangle::~Rectangle(){

}

Rectangle& Rectangle::operator=(const Rectangle& rhs){
    if(this != &rhs){
        //setA(rhs.getA());
        Square::operator=(rhs);
        _b = rhs._b;
    }

    return *this;
}

void Rectangle::setB(double b){
    if(b > 0){
    _b = b;
    }
}

double Rectangle::P() const{
    return 2 * _b + 2 * getA();
}

double Rectangle::S() const{
    return _b * getA();
}

std::ostream& Rectangle::ins(std::ostream& out) const {
    out << getA() << " " << _b;
    return out;
}

std::istream& Rectangle::ext(std::istream& in)
{
    Shape::ext(in);
    in >> _b;

    return in;
}

bool Rectangle::operator>(const Rectangle &rhs) const {
    return S() > rhs.S();
}

bool Rectangle::operator<(const Rectangle &rhs) const {
    return rhs > *this;
}

std::ostream& operator<<(std::ostream& out, const Rectangle& rhs){
    return rhs.ins(out);
}

std::istream& operator>>(std::istream& in, Rectangle& rhs)
{
    return rhs.ext(in);
}
