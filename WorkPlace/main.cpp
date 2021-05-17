#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Executive.h"

void t1(){
    Employee e1("Ivan", 100, 1);
    e1 = Employee("Denis", 35, 0);
    e1.setName("Nichze");

    std::cout << e1 << std::endl;
}

void t2(){
    Manager m1("Richie", 1000, 5, "QA");
    m1.setDepartment("Quality Assurance");

    std::cout << m1 << std::endl;
}

void t3(){
    Executive ex1("Richie", 1000, 5, "QA");
    ex1.setDepartment("Quality Assurance");

    std::cout << ex1 << std::endl;

}

int main() {

    t1();
    t2();
    t3();

    return 0;
}
