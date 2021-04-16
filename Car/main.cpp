#include <iostream>
#include "Car.h"
#include "CarDealer.h"

int main() {

    Car c1("BMW", 5, 150, 1999, 10000);
    Car c2 = 33 + c1 + 50;
    Car c3;
    c3 = c2;

    c3 *= 2;

    std::cout << c2;
    std::cout << ++c3;
    std::cout << c1%5;

    Car c4("a", 1, 1, 2001, 5000);
    std::cout << (c4 <= Car("b", 1, 1, 2001, 5000)) << std::endl;

    Car carsCeco[3] = {c1, c2, c3};
    CarDealer cecArDlr("Ceco", 3, carsCeco);

    Car carsIvan[1] = {c2};
    cecArDlr = CarDealer("Ivan", 1, carsIvan);

    std::cout << cecArDlr;

    return 0;
}
