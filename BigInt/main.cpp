#include <iostream>
#include "BigInteger.h"

int main() {

    BigInteger a("123456789"), b("987654321");

    BigInteger c = a - 123456787;

    std::cout << c * a + b;

    return 0;
}
