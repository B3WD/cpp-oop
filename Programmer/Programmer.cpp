//
// Created by tzvet on 20.4.2021 г..
//

#include "Programmer.h"

Programmer::Programmer(const char* name, double salary)
: Employee(name, salary){

}

Programmer::Programmer(const Programmer& rhs)
: Employee(rhs){

}

Programmer::~Programmer(){
}

Programmer& Programmer::operator=(const Programmer& rhs){
    if(this != &rhs){
        Employee::operator=(rhs);
    }

    return *this;
}

std::ostream& Programmer::ins(std::ostream& out) const{
    out << getName() << "(Programmer)\nSalary: " << getSalary();
    return out;
}

std::ostream& operator<<(std::ostream& out, const Programmer& rhs){
    return rhs.ins(out);
}