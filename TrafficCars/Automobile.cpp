//
// Created by tzvet on 28.4.2021 г..
//

#include "Automobile.h"

Automobile::Automobile(const char* brand, int wheelCount, int hp, const char* coupType)
: Vehicle(brand, wheelCount, hp), _coupType(new char[strlen(coupType)+1]){
    strcpy(_coupType, coupType);
}

Automobile::Automobile(const Automobile &rhs)
: Vehicle(rhs), _coupType(new char[strlen(rhs._coupType)+1]) {
    strcpy(_coupType, rhs._coupType);
}

Automobile::~Automobile(){
    delete[] _coupType;
}

Automobile& Automobile::operator=(const Automobile &rhs){
    if(this != &rhs){
        Vehicle::operator=(rhs);
        setCoupType(rhs._coupType);
    }

    return *this;
}

void Automobile::setCoupType(const char* coupType){
    delete[] _coupType;
    _coupType = new char[strlen(coupType)+1];
    strcpy(_coupType, coupType);
}

std::ostream& Automobile::ins(std::ostream &out) const{
    Vehicle::ins(out) << " " << _coupType;

    return out;
}

std::ostream& operator<<(std::ostream &out, const Automobile &rhs){
    return rhs.ins(out);
}