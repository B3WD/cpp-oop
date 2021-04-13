#include <iostream>
#include "Calculator.h"


int main() {

    Calculator c1("26/5+7"); // does not implement operator precedence.

    std::cout << c1.getExp() << " = " << c1 << std::endl;

    c1.setExp("1+1+1+1+1+1+1+1+1+1");
    std::cout << c1.getExp() << " = " << c1 << std::endl;

    c1.setExp("-2-2-2");
    std::cout << c1.getExp() << " = " << c1 << std::endl;

    return 0;
}
