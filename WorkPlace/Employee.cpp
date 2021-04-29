//
// Created by tzvet on 29.4.2021 г..
//

#include "Employee.h"

Employee::Employee(std::string name, int salary, int experience)
: _name(name), _salary(salary), _experience(experience){  }

Employee::Employee(const Employee &rhs)
:_name(rhs._name), _salary(rhs._salary), _experience(rhs._experience){  }

Employee::~Employee(){  } // Why should the deconstructor be virtual?

Employee& Employee::operator=(const Employee &rhs){
    if(this != &rhs){
        _name = rhs._name;
        _salary = rhs._salary;
        _experience = rhs._experience;
    }

    return *this;
}

void Employee::setName(std::string name){
    _name = std::move(name);
}

void Employee::setSalary(int salary){
    _salary = salary;
}

void Employee::setExperience(int experience){
    _experience = experience;
}

std::ostream& Employee::ins(std::ostream &out) const{
    out << _name << " " << _salary << " " << _experience;

    return out;
}

std::ostream& operator<<(std::ostream &out, const Employee &rhs){
    return rhs.ins(out);
}