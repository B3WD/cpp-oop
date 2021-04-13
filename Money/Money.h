//
// Created by tzvet on 10.4.2021 г..
//

#ifndef Z2_MONEY_H
#define Z2_MONEY_H

#include <iostream>

class Money {
private:
    int _lv;
    int _stot;

public:
    Money(int lv = 0, int stot = 0);
    ~Money();

    bool operator>(const Money& rhs) const;
    Money operator+(const Money &) const;
    Money operator-(const Money &) const;
    Money operator*(int) const;
    Money operator/(int) const;
    double operator%(double percent) const;

    std::ostream& ins(std::ostream& out) const;
    std::istream& ext(std::istream& in);

    int toStot() const;
};

std::ostream& operator<<(std::ostream& out, const Money& rhs);
std::istream& operator>>(std::istream& in, Money& rhs);

#endif //Z2_MONEY_H
