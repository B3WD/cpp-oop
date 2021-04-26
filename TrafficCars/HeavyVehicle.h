//
// Created by tzvet on 26.4.2021 г..
//

#ifndef TRAFFICCARS_HEAVYVEHICLE_H
#define TRAFFICCARS_HEAVYVEHICLE_H

#include "Vehicle.h"

class HeavyVehicle: public Vehicle{
private:
    int _pullingWeight;
public:
    HeavyVehicle(const char* brand = "Null", int wheelCount = 0, int hp = 0, int pullingWeight = 0);
    HeavyVehicle(const HeavyVehicle& rhs);
    ~HeavyVehicle();
    HeavyVehicle& operator=(const HeavyVehicle& rhs);

    void setPullingWeight(int pullingWeight);
    inline int getPullingWeight() const { return _pullingWeight; };

    std::ostream& ins(std::ostream& out) const;
};

std::ostream& operator<<(std::ostream& out, const Vehicle& rhs);

#endif //TRAFFICCARS_HEAVYVEHICLE_H
