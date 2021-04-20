//
// Created by tzvet on 20.4.2021 г..
//

#include "Employee.h"

Employee::Employee(const char* name, double salary)
:_name(new char[strlen(name)+1]), _salary(salary){
    strcpy(_name, name);
}

Employee::Employee(const Employee& rhs)
:_name(new char[strlen(rhs._name)]), _salary(rhs._salary){
    strcpy(_name, rhs._name);
}

Employee::~Employee(){
    delete[] _name;
}

Employee& Employee::operator=(const Employee& rhs){
    if(this != &rhs){
        delete[] _name;
        _name = new char[strlen(rhs._name)+1];
        strcpy(_name, rhs._name);

        _salary = rhs._salary;
    }

    return *this;
}

void Employee::setName(const char* name){
    delete [] _name;
    _name = new char[strlen(name)+1];
    strcpy(_name, name);
}

void Employee::setSalary(double salary){
    _salary = salary;
}

std::ostream &Employee::ins(std::ostream &out) const{
    out << "Name: " << _name << "\nSalary: " << _salary;
    return out;
}

std::ostream& operator<<(std::ostream& out, const Employee& rhs){
    return rhs.ins(out);
}
