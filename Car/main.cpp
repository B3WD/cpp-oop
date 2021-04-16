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

    Car carsCeco[4] = {c1, c2, c3, Car("\0")};
    CarDealer cecArDlr("Ceco", 4, carsCeco);

    Car carsIvan[2] = {c2, Car("\0")};
    cecArDlr = CarDealer("Ivan", 2, carsIvan);

    std::cout << cecArDlr + Car() + Car("Lmao");

    std::cout << "Car arr: " << carsCeco;

    return 0;
}
