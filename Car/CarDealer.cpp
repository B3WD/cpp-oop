//
// Created by tzvet on 16.4.2021 г..
//

#include "CarDealer.h"

CarDealer::CarDealer(const char *name, unsigned int carCount, Car *cars)
: _name(new char[strlen(name)+1]), _carCount(carCount), _cars(new Car[carCount]) {
    strcpy(_name, name);

    for(int i = 0; i < carCount; i++){
        _cars[i] = cars[i];
    }
}

CarDealer::CarDealer(const CarDealer &rhs)
: _name(new char[strlen(rhs._name)+1]), _carCount(rhs._carCount), _cars(new Car[rhs._carCount]) {
    strcpy(_name, rhs._name);

    for(int i = 0; i < rhs._carCount; i++){
        _cars[i] = rhs._cars[i];
    }
}

CarDealer::~CarDealer() {
    delete[] _name;
    delete[] _cars;
}

CarDealer& CarDealer::operator=(const CarDealer& rhs) {
    if(this != &rhs){
        delete[] _name;
        _name = new char[strlen(rhs._name)+1];
        strcpy(_name, rhs._name);
        _carCount = rhs._carCount;

        delete[] _cars;
        _cars = new Car[rhs._carCount];

        for(int i = 0; i < rhs._carCount; i++){
            _cars[i] = rhs._cars[i];
        }
    }

    return *this;
}

Car CarDealer::operator[](int i) const {
    return _cars[i];
}

std::ostream& CarDealer::ins(std::ostream& out) const {
    out << "Dealer name: " << _name << "\nCar count: " << _carCount << "\n" << _cars;

    return out;
}

CarDealer& CarDealer::operator+(const Car &rhs) {
    Car* oldCars = new Car[_carCount];

    for(int i = 0; i < _carCount; i++){
        oldCars[i] = _cars[i];
    }

    delete[] _cars;
    _cars = new Car[_carCount+1];

    for(int i = 0; i < _carCount-1; i++){
        _cars[i] = oldCars[i];
    }
    _cars[_carCount-1] = rhs;
    _cars[_carCount] = oldCars[_carCount-1];
    _carCount++;
    delete[] oldCars;

    return *this;
}

std::ostream& operator<<(std::ostream& out, const CarDealer& rhs){
    return rhs.ins(out);
}