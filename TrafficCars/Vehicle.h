//
// Created by tzvet on 26.4.2021 г..
//

#ifndef TRAFFICCARS_VEHICLE_H
#define TRAFFICCARS_VEHICLE_H

#include <iostream>
#include <cstring>

class Vehicle {
private:
    int _wheelCount;
    int _hp;
    char* _brand;

public:
    Vehicle(const char* = "Null", int wheelCount = 0, int hp = 0);
    Vehicle(const Vehicle& rhs);
    ~Vehicle();
    Vehicle& operator=(const Vehicle& rhs);

    void setBrand(const char* brand);
    void setWheelCount(int wheelCount);
    void setHp(int hp);

    inline char* getBrand() const { return _brand; };
    inline int getWheelCount() const { return _wheelCount; };
    inline int getHp() const { return _hp; };

    std::ostream& ins(std::ostream& out) const;
};

std::ostream& operator<<(std::ostream& out, const Vehicle& rhs);


#endif //TRAFFICCARS_VEHICLE_H
