#include <iostream>
#include "Employee.h"

void t1(){
    Employee e1("Ivan", 100, 1);
    e1 = Employee("Denis", 35, 0);
    e1.setName("Nichze");

    std::cout << e1;
}

int main() {

    t1();

    return 0;
}
