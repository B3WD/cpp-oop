//
// Created by tzvet on 11.4.2021 г..
//

#ifndef Z3_BIGINTEGER_H
#define Z3_BIGINTEGER_H

#include <iostream>
#include <cstring>

class BigInteger {
private:
    char* _numString;
    long long _num; // remove this to simplify the code.
                    // Learn to not add unnecessary things
                    // that complicate the code.

public:
    BigInteger(const char* numString = "0");
    BigInteger(int a);
    BigInteger(const BigInteger&);
    BigInteger& operator=(const BigInteger& rhs);
    ~BigInteger();

    BigInteger operator+(const BigInteger&) const;
    BigInteger operator-(const BigInteger&) const;
    BigInteger operator*(const BigInteger&) const;

    std::ostream& ins(std::ostream& out) const;
};

std::ostream& operator<<(std::ostream& out, const BigInteger& rhs);

#endif //Z3_BIGINTEGER_H
