//
// Created by tzvet on 13.4.2021 г..
//

#ifndef BUILDING_BUILDING_H
#define BUILDING_BUILDING_H

#include <iostream>
#include <cstring>

class Building {
private:
    int _pFloors, _bFloors, _pEnt, _bEnt;
    char* _address;

public:
    Building(const char* address = "Null", int pFloors = 0, int bFloors = 0, int pEnt = 0, int bEnt = 0);
    Building(const Building& rhs);
    ~Building();

    char* getAddress() const { return _address;};
    int getPFloors() const { return _pFloors;};
    int getBFloors() const { return _bFloors;};
    int getPEnt() const { return _pEnt;};
    int getBEnt() const { return _bEnt;};

    Building& operator=(const Building& rhs);
    Building operator+(int rhs) const;
    Building& operator+=(int rhs);

    std::ostream& ins(std::ostream& out) const; // const protects the "hidden" param "this", which means that
                                                // object data will not be changed.
    std::istream& exc(std::istream& in);
};

Building operator+(int lhs, const Building& rhs);
std::ostream& operator<<(std::ostream& out, const Building& rhs);
std::istream& operator>>(std::istream& in, Building& rhs);

#endif //BUILDING_BUILDING_H
