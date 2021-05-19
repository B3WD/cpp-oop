//
// Created by tzvet on 17.4.2021 г..
//

#include "Square.h"

Square::Square(double a):Shape(a){

}

Square::Square(Point p1, Point p2):Shape(p1), _p2(p2)
{
    setA(abs(p1.getX() - p2.getX()));
}

Square::Square(const Square& rhs):Shape(rhs){

}

Square::~Square(){

}

Square& Square::operator=(const Square& rhs){
    if(this != &rhs){
        // setA(rhs.getA());
        Shape::operator=(rhs);
    }

    return *this;
}

double Square::P() const {
    return 4*getA();
}

double Square::S() const {
    return getA()*getA();
}

bool Square::operator>(const Square &rhs) const {
    return S() > rhs.S();
}

bool Square::operator<(const Square &rhs) const {
    return S() < rhs.S();
}

//std::ostream& operator<<(std::ostream& out, const Square& rhs){
//    out << rhs.getA();
//    return out;
//}