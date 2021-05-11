//
// Created by tzvet on 11.5.2021 г..
//

#ifndef MAIN_CPP_MANAGER_H
#define MAIN_CPP_MANAGER_H

#include "Employee.h"
#include <cstring>

class Manager : public Employee{
private:
    std::string _department;
public:
    Manager(std::string name = "Null",
            int salary = 0,
            int experience = 0,
            std::string department = "Null");

    Manager(const Manager &rhs);
    ~Manager();

    void setDepartment(std::string dep);
    std::string getDepartment() const { return _department; };

    Manager& operator=(const Manager &rhs);

    virtual std::ostream& ins(std::ostream &out) const;
};

std::ostream& operator<<(std::ostream &out, const Manager &rhs);

#endif //MAIN_CPP_MANAGER_H
