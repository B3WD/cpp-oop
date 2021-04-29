//
// Created by tzvet on 29.4.2021 г..
//

#ifndef WORKPLACE_EMPLOYEE_H
#define WORKPLACE_EMPLOYEE_H

#include <string>
#include <iostream>

class Employee {
private:
    std::string _name;
    int _salary;
    int _experience;

public:
    Employee(std::string name = "Null", int salary = 0, int experience = 0);
    Employee(const Employee &rhs);
    ~Employee(); // Why should the deconstructor be virtual?

    Employee& operator=(const Employee &rhs);

    std::string getName() const { return _name; };
    int getSalary() const { return _salary; };
    int getExperience() const { return _experience; };

    void setName(std::string name);
    void setSalary(int salary);
    void setExperience(int experience);

    virtual std::ostream& ins(std::ostream &out) const;

};

std::ostream& operator<<(std::ostream &out, const Employee &rhs);

#endif //WORKPLACE_EMPLOYEE_H
