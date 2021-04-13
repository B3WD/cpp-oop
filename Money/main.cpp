#include <iostream>
#include "Money.h"

int main() {

    Money m1(35, 99);

    std::cout << m1 << std::endl;

    Money m2;

    std::cin >> m2;
    std::cout << m2 << std::endl;

    Money m3 = (m1 * 2 + m2) / 25;
    std::cout << m3 << std::endl;

    if(m3 > m1){
        std::cout << "m3 is bigger\n";
    } else {
        std::cout << "m1 is bigger\n";
    }

    std::cout << m2 % 10;

    return 0;
}
