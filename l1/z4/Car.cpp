//
// Created by tzvet on 7.4.2021 г..
//

#include <iostream>
#include <cstring>
#include "Car.h"

Car::Car(const char* brand, int doors, int hp, int year, double price)
:_brand(new char[strlen(brand)+1]), _doors(doors), _hp(hp), _year(year), _price(price)
{
    strcpy(_brand, brand);
}

Car::~Car(){
    if (_brand!= nullptr){
        delete [] _brand;
        _brand = nullptr;
    }
}

Car::Car(const Car& rhs){
    _brand = new char[strlen(rhs._brand)+1];
    strcpy(_brand, rhs._brand);

    _doors = rhs._doors;
    _hp = rhs._hp;
    _year = rhs._year;
    _price = rhs._price;
}

Car& Car::operator=(const Car & rhs){
    if (this != &rhs){

        delete [] _brand;
        _brand = new char[strlen(rhs._brand)+1];
        strcpy(_brand, rhs._brand);

        _doors = rhs._doors;
        _hp = rhs._hp;
        _year = rhs._year;
        _price = rhs._price;
    }

    return *this;
}

void Car::print() const{
    std::cout << "Brand: " << _brand << "\nDoors: " << _doors << "\nHP: " << _hp << "\nYear: " << _year << "\nPrice: " << _price << "\n";
}

void Car::setBrand(const char * brand){
    delete[] _brand;
    _brand = new char[strlen(brand)+1];
    strcpy(_brand, brand);
}

std::ostream &Car::ins(std::ostream &out) const {
    out << "Brand: " << _brand << "\nDoors: " << _doors << "\nHP: " << _hp << "\nYear: " << _year << "\nPrice: " << _price << "\n";
    return out;
}

Car::operator double() {
    return _hp;
}

std::ostream& operator<<(std::ostream& lhs, const Car& rhs){
    return rhs.ins(lhs);
}