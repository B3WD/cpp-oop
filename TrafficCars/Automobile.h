//
// Created by tzvet on 28.4.2021 г..
//

#ifndef MAIN_CPP_AUTOMOBILE_H
#define MAIN_CPP_AUTOMOBILE_H

#include "Vehicle.h"

class Automobile: public Vehicle{
private:
    char* _coupType;

public:
    Automobile(const char* brand = "Null", int wheelCount = 0, int hp = 0, const char* coupTye = "Null");
    Automobile(const Automobile &rhs);
    ~Automobile();

    Automobile& operator=(const Automobile &rhs);

    void setCoupType(const char* coupType);
    char* getCoupType() const { return _coupType; };

    std::ostream& ins(std::ostream &out) const;
};

std::ostream& operator<<(std::ostream &out, const Automobile &rhs);

#endif //MAIN_CPP_AUTOMOBILE_H
