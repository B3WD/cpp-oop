//
// Created by tzvet on 26.4.2021 г..
//

#include "HeavyVehicle.h"

HeavyVehicle::HeavyVehicle(const char* brand, int wheelCount, int hp, int pullingWeight)
: Vehicle(brand, wheelCount, hp), _pullingWeight(pullingWeight){  }

HeavyVehicle::HeavyVehicle(const HeavyVehicle& rhs)
:Vehicle(rhs), _pullingWeight(rhs._pullingWeight){  }

HeavyVehicle::~HeavyVehicle(){  }

HeavyVehicle& HeavyVehicle::operator=(const HeavyVehicle& rhs){
    if(this != &rhs){
        Vehicle::operator=(rhs);
        setPullingWeight(rhs._pullingWeight);
    }

    return *this;
}

void HeavyVehicle::setPullingWeight(int pullingWeight){
    _pullingWeight = pullingWeight;
}

std::ostream& HeavyVehicle::ins(std::ostream& out) const{
    Vehicle::ins(out) << " " << _pullingWeight;

    return out;
}

std::ostream& operator<<(std::ostream& out, const HeavyVehicle& rhs){
    return rhs.ins(out);
}