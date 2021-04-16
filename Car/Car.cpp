//
// Created by tzvet on 7.4.2021 г..
//

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

Car Car::operator+(int rhs) const {
    return Car(_brand, _doors, _hp+rhs, _year, _price);
}

Car& Car::operator+=(int rhs) {
    _hp += rhs;
    return *this;
}

Car Car::operator++(int) {
    Car oldCar = *this;
    _hp += 150;
    return oldCar;
}

Car& Car::operator++() {
    _hp += 150;
    return *this;
}

Car& Car::operator*=(int rhs) {
    _price *= rhs;
    return *this;
}

Car::operator double() {
    return _price;
}

Car Car::operator%(int rhs) const{
    return Car(_brand, _doors, _hp, _year, _price - (_price*0.1)*rhs);
}

bool Car::operator>(const Car& rhs) const {
    bool flag = false;
    if(_price > rhs._price || (_price == rhs._price && _year < rhs._year)) {
        flag = true;
    }

    return flag;
}

bool Car::operator>=(const Car &rhs) const {
    bool flag = false;
    if(!(rhs>*this)){
        flag = true;
    }
    return flag;
}

bool Car::operator==(const Car &rhs) const {
    bool flag = false;
    if(!strcmp(_brand, rhs._brand) && _hp == rhs._hp && _year == rhs._year && _price == rhs._price){
        flag = true;
    }
    return flag;
}

bool Car::operator<(const Car &rhs) const {
    return rhs>*this;
}

bool Car::operator<=(const Car &rhs) const {
    return rhs>=*this;
}

std::ostream& operator<<(std::ostream& lhs, const Car& rhs){
    return rhs.ins(lhs);
}

Car operator+(int lhs, const Car& rhs) {
    return rhs + lhs;
}