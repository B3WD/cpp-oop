//
// Created by tzvet on 28.4.2021 г..
//

#include "AirVehicle.h"

AirVehicle::AirVehicle(const char* brand, int wheelCount, int hp, unsigned wingCount)
: Vehicle(brand, wheelCount, hp), _wingCount(wingCount){}

AirVehicle::AirVehicle(const AirVehicle &rhs)
: Vehicle(rhs), _wingCount(rhs._wingCount){}

AirVehicle::~AirVehicle(){}

AirVehicle& AirVehicle::operator=(const AirVehicle &rhs){
    if(this != &rhs){
        Vehicle::operator=(rhs);
        _wingCount = rhs._wingCount;
    }

    return *this;
}

void AirVehicle::setWingCount(unsigned wingCount){
    _wingCount = wingCount;
}

std::ostream& AirVehicle::ins(std::ostream &out) const{
    Vehicle::ins(out) << " " << _wingCount;
    return out;
}

std::ostream& operator<<(std::ostream &out, const AirVehicle &rhs){
    return rhs.ins(out);
}