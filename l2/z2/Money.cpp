//
// Created by tzvet on 10.4.2021 г..
//

#include "Money.h"

Money::Money(int lv, int stot)
: _lv(lv), _stot(stot){

}

Money::~Money(){}

bool Money::operator>(const Money& rhs) const{
    return toStot() > rhs.toStot();
}

Money& Money::operator+(const Money & rhs){
    int newTotal = toStot() + rhs.toStot();
    _lv = newTotal / 100;
    _stot = newTotal - (_lv * 100);

    return *this;
}

Money& Money::operator-(const Money & rhs){
    int newTotal = toStot() - rhs.toStot();
    _lv = newTotal / 100;
    _stot = newTotal - (_lv * 100);

    return *this;
}

Money& Money::operator*(int rhs){
    int newTotal = toStot() * rhs;
    _lv = newTotal / 100;
    _stot = newTotal - (_lv * 100);

    return *this;
}

Money& Money::operator/(int rhs){
    int newTotal = toStot() / rhs;
    _lv = newTotal / 100;
    _stot = newTotal - (_lv * 100);

    return *this;
}

std::istream& Money::ext(std::istream& in){
    in >> _lv >> _stot;
    return in;
}

std::ostream& Money::ins(std::ostream& out) const{
    out << _lv << "," << _stot;
    return out;
}

int Money::toStot() const {
    return _lv * 100 + _stot;
}

double Money::operator%(double percent) const {

    return toStot() * percent / 100. / 100.;
}

std::ostream& operator<<(std::ostream& out, const Money& rhs){
    return rhs.ins(out);
}

std::istream& operator>>(std::istream& in, Money& rhs){
    return rhs.ext(in);
}