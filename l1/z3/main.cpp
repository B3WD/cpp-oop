#include <iostream>
#include "Calculator.h"


int main() {

    Calculator c1("26/5+4");

    std::cout << c1.getExp()<< " = " << c1;

    return 0;
}
