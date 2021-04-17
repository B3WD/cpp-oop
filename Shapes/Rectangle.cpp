//
// Created by tzvet on 17.4.2021 г..
//

#include "Rectangle.h"

Rectangle::Rectangle(double a, double b): Square(a), _b(b){

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

bool Rectangle::operator>(const Rectangle &rhs) const {
    return S() > rhs.S();
}

bool Rectangle::operator<(const Rectangle &rhs) const {
    return rhs > *this;
}

std::ostream& operator<<(std::ostream& out, const Rectangle& rhs){
    return rhs.ins(out);
}