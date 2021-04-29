#include <iostream>
#include "Vehicle.h"
#include "HeavyVehicle.h"
#include "Automobile.h"
#include "AirVehicle.h"
#include "AutomobileArr.h"


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

void t3(){
    Automobile a1("Fiat", 4, 80, "sedan");
    a1.setCoupType("Convertable");
    a1.setHp(99);
    std::cout << a1;
}

void t4(){
    AirVehicle av1("AirBus", 26, 50000, 5);
    av1.setWingCount(6);
    av1.setBrand("747");
    std::cout << av1;

}

void t5(){
    Automobile a("bmw", 1, 2, "coupe");
    Automobile b(a);
    b.setBrand("McLaren");

    Automobile MobileAar[] = { a, b };

    AutomobileArr aa1(MobileAar, 2);

    std::cout << aa1[1] << "\n";

    std::cout << aa1;
}

int main() {

    // t1();
    // t2();
    // t3();
    // t4();
    t5();

    return 0;
}
