//
// Created by tzvet on 11.5.2021 г..
//

#include "Manager.h"

Manager::Manager(std::string name, int salary, int experience, std::string department)
: Employee(name, salary, experience), _department(department){}

Manager::Manager(const Manager &rhs) : Employee(rhs), _department(rhs._department) {}

Manager::~Manager(){}

void Manager::setDepartment(std::string dep){
    _department = dep;
}

Manager& Manager::operator=(const Manager &rhs){
    if(this != &rhs){
        Employee::operator=(rhs);
        _department = rhs._department;
    }
    return *this;
}

std::ostream& Manager::ins(std::ostream &out) const{
    Employee::ins(out) << " " << _department;
    return out;
}

std::ostream& operator<<(std::ostream &out, const Manager &rhs){
    return rhs.ins(out);
}
