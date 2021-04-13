#include <iostream>
#include "Building.h"

int main() {

    Building b1;

    std::cin >> b1;
    b1 += 100;
    b1 = 50 + b1;

    std::cout << b1;

    return 0;
}
