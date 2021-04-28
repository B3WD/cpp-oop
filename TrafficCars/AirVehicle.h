//
// Created by tzvet on 28.4.2021 г..
//

#ifndef MAIN_CPP_AIRVEHICLE_H
#define MAIN_CPP_AIRVEHICLE_H

#include "Vehicle.h"

class AirVehicle : public Vehicle{
private:
    unsigned _wingCount;

public:
    AirVehicle(const char* brand = "Null", int wheelCount = 0, int hp = 0, unsigned wingCount = 0);
    AirVehicle(const AirVehicle &rhs);
    ~AirVehicle();

    AirVehicle& operator=(const AirVehicle &rhs);

    void setWingCount(unsigned wingCount);
    unsigned getWingCount() const { return _wingCount;};

    std::ostream& ins(std::ostream &out) const;
};

std::ostream& operator<<(std::ostream &out, const AirVehicle &rhs);


#endif //MAIN_CPP_AIRVEHICLE_H
