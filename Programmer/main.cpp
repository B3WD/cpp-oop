#include <iostream>
#include "Employee.h"
#include "Programmer.h"

int main() {

    std::cout << Employee("Michel", 99.99) << "\n";
    std::cout << Programmer("John", 111.11) << "\n";

    return 0;
}
