#include <iostream>
#include "Car.h"

int main() {

    Car c1("BMW", 5, 150, 1999, 10000);
    Car c2 = c1;
    Car c3;
    c3.print();
    c3 = c2;

    c1.print();
    c2.print();
    c2.setBrand("Lmao");
    c2.print();

    c3.print();

    return 0;
}
