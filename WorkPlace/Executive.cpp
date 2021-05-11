//
// Created by tzvet on 11.5.2021 г..
//

#include "Executive.h"

Executive::Executive(std::string name, int salary, int experience, std::string department)
: Manager(name, salary, experience, department){}

Executive::Executive(const Executive &rhs): Manager(rhs){}

Executive::~Executive(){}

Executive& Executive::operator=(const Executive &rhs){
    if(this != &rhs){
        Manager::operator=(rhs);
    }

    return *this;
}

std::ostream& Executive::ins(std::ostream &out) const{
    out << "Executive: ";
    Manager::ins(out);
    return out;
}

std::ostream& operator<<(std::ostream &out, const Executive &rhs){
    return rhs.ins(out);
}