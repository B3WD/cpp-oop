//
// Created by tzvet on 11.4.2021 г..
//

#include "BigInteger.h"

BigInteger::BigInteger(const char* numString):_numString(new char[strlen(numString)+1]){
    strcpy(_numString, numString);
    _num = std::stoll(_numString);
}

BigInteger::BigInteger(const BigInteger& rhs):_num(rhs._num){
    delete[] _numString;
    _numString = new char[strlen(rhs._numString)+1];
    strcpy(_numString, rhs._numString);
}

BigInteger::~BigInteger(){
    delete[] _numString;
    _numString = nullptr;
}

BigInteger BigInteger::operator*(const BigInteger& rhs) const{;
    return BigInteger(std::to_string(_num * rhs._num).c_str());
}

std::ostream& BigInteger::ins(std::ostream& out) const{
    out << _num;
    return out;
}

BigInteger BigInteger::operator+(const BigInteger & rhs) const{
    return BigInteger(std::to_string(_num + rhs._num).c_str());
}

BigInteger BigInteger::operator-(const BigInteger & rhs) const{
    return BigInteger(std::to_string(_num - rhs._num).c_str()); ;
}

BigInteger& BigInteger::operator=(const BigInteger &rhs) {
    if(this != &rhs){
        delete[] _numString;
        _numString = new char[strlen(rhs._numString)+1];
        strcpy(_numString, rhs._numString);

        _num = rhs._num;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, const BigInteger& rhs){
    return rhs.ins(out);
}