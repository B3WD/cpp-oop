//
// Created by tzvet on 20.4.2021 г..
//

#ifndef PROGRAMMER_PROGRAMMER_H
#define PROGRAMMER_PROGRAMMER_H

#include "Employee.h"

class Programmer: public Employee{
public:
    Programmer(const char* name = "NULL", double salary = 0);
    Programmer(const Programmer& rhs);
    ~Programmer();

    Programmer& operator=(const Programmer& rhs);

    std::ostream& ins(std::ostream& out) const;
};

std::ostream& operator<<(std::ostream& out, const Programmer& rhs);


#endif //PROGRAMMER_PROGRAMMER_H
