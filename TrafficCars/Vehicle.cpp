//
// Created by tzvet on 26.4.2021 г..
//

#include "Vehicle.h"

Vehicle::Vehicle(const char* brand, int wheelCount, int hp)
:_brand(new char[strlen(brand)+1]), _wheelCount(wheelCount), _hp(hp){
    strcpy(_brand, brand);
}

Vehicle::Vehicle(const Vehicle& rhs)
:_brand(new char[strlen(rhs._brand)+1]), _wheelCount(rhs._wheelCount), _hp(rhs._hp){
    strcpy(_brand, rhs._brand);
}

Vehicle::~Vehicle(){
    delete[] _brand;
}

Vehicle& Vehicle::operator=(const Vehicle& rhs){
    if(this != &rhs){
        setBrand(rhs._brand);
        setWheelCount(rhs._wheelCount);
        setHp(rhs._hp);
    }

    return *this;
}

void Vehicle::setWheelCount(int wheelCount){
    _wheelCount = wheelCount;
}

std::ostream& Vehicle::ins(std::ostream& out) const{
    out << _brand << " " << _wheelCount << " " << _hp;

    return out;
}

void Vehicle::setHp(int hp) {
    _hp = hp;
}

void Vehicle::setBrand(const char* brand) {
    delete[] _brand;
    _brand = new char[strlen(brand)+1];
    strcpy(_brand, brand);
}

std::ostream& operator<<(std::ostream& out, const Vehicle& rhs){
    return rhs.ins(out);
}