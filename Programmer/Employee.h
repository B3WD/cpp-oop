//
// Created by tzvet on 20.4.2021 г..
//

#ifndef PROGRAMMER_EMPLOYEE_H
#define PROGRAMMER_EMPLOYEE_H

#include <iostream>
#include <cstring>

class Employee {
private:
    char* _name;
    double _salary;

public:
    Employee(const char* name = "NULL", double salary = 0);
    Employee(const Employee& rhs);
    ~Employee();

    Employee& operator=(const Employee& rhs);

    char* getName() const { return _name; };
    double getSalary() const { return _salary; };
    void setName(const char* name);
    void setSalary(double salary);

    std::ostream& ins(std::ostream& out) const;
};

std::ostream& operator<<(std::ostream& out, const Employee& rhs);

#endif //PROGRAMMER_EMPLOYEE_H
