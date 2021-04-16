//
// Created by tzvet on 16.4.2021 г..
//

#ifndef MAIN_CPP_CARDEALER_H
#define MAIN_CPP_CARDEALER_H

#include "Car.h"
#include <iostream>
#include <cstring>

class CarDealer {
private:
    char* _name;
    unsigned _carCount;
    Car* _cars;

public:
    CarDealer(const char* name = "Null", unsigned carCount = 0, Car* cars = nullptr);
    CarDealer(const CarDealer& rhs);
    ~CarDealer();
    CarDealer& operator=(const CarDealer& rhs);

    Car operator[](int i) const;

    std::ostream& ins(std::ostream& out) const;
};

std::ostream& operator<<(std::ostream& out, const CarDealer& rhs);

#endif //MAIN_CPP_CARDEALER_H