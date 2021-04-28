#include <iostream>
#include "Vehicle.h"
#include "HeavyVehicle.h"

void t1(){
    Vehicle v1("Kia", 10, 1);
    v1.setWheelCount(12);
    v1 = Vehicle("Toyota", 55, 30);
    v1.setBrand("Honda");
    std::cout << "Wheel count: " << v1;
}

void t2(){
    HeavyVehicle h1("Scania", 8, 250, 10000);
    h1.setBrand("Mercedes");
    std::cout << h1; // pullingWeight does not appear.
}

int main() {

    // t1();
    // t2();
    //

    return 0;
}
