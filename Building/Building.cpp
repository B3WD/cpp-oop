//
// Created by tzvet on 13.4.2021 г..
//

#include "Building.h"

Building::Building(const char* address, int pFloors, int bFloors, int pEnt, int bEnt)
:_address(new char[strlen(address)+1]), _pFloors(pFloors), _bFloors(bFloors), _pEnt(pEnt), _bEnt(bEnt){
    strcpy(_address, address);
}

Building::Building(const Building& rhs)
:_pFloors(rhs._pFloors), _bFloors(rhs._bFloors), _pEnt(rhs._pEnt), _bEnt(rhs._bEnt){
    delete[] _address;
    _address = new char[strlen(rhs._address)+1];
    strcpy(_address, rhs._address);
}

Building::~Building(){
    delete[] _address;
    _address = nullptr;
}

Building& Building::operator=(const Building& rhs){
    if(this != &rhs){
        delete[] _address;
        _address = new char[strlen(rhs._address)+1];
        strcpy(_address, rhs._address);

        _pFloors = rhs._pFloors;
        _bFloors = rhs._bFloors;
        _pEnt = rhs._pEnt;
        _bEnt = rhs._bEnt;
    }

    return *this;
}
Building Building::operator+(int rhs) const{
    return Building(_address, _pFloors, _bFloors + rhs, _pEnt, _bEnt);
}

Building& Building::operator+=(int rhs){
    _bFloors += rhs;

    return *this;
}

std::ostream& Building::ins(std::ostream& out) const{
    out << "Address: " << _address <<
    "\nFloors built/planned: " << _bFloors << "/" << _pFloors <<
    "\nEntrances built/planned: " << _bEnt << "/" << _pEnt;

    return out;
}

std::istream& Building::exc(std::istream& in){
    char newAddress[30];

    in >> newAddress >> _pFloors >> _bFloors >> _pEnt >> _bEnt;
    delete[] _address;
    _address = new char[strlen(newAddress)+1];
    strcpy(_address, newAddress);

    return in;
}

Building operator+(int lhs, const Building& rhs){
    return Building(rhs.getAddress(), rhs.getPFloors(), rhs.getBFloors(), rhs.getPEnt(), rhs.getBEnt()+lhs);
}

std::ostream& operator<<(std::ostream& out, const Building& rhs){
    return rhs.ins(out);
}

std::istream& operator>>(std::istream& in, Building& rhs){
    return rhs.exc(in);
}