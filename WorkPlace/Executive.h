//
// Created by tzvet on 11.5.2021 г..
//

#ifndef MAIN_CPP_EXECUTIVE_H
#define MAIN_CPP_EXECUTIVE_H

#include "Manager.h"

class Executive : public Manager{
public:
    Executive(std::string name = "Null", int salary = 0, int experience = 0, std::string department = "Null");
    Executive(const Executive &rhs);
    ~Executive();

    Executive& operator=(const Executive &rhs);

    virtual std::ostream& ins(std::ostream &out) const;
};

std::ostream& operator<<(std::ostream &out, const Executive &rhs);


#endif //MAIN_CPP_EXECUTIVE_H
