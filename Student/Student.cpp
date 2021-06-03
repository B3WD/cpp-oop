//
// Created by tzvet on 29.3.2021 г..
//

#include "Student.h"
#include <cstring>
#include <assert.h>


Student::Student(const char* name, const char* fn, int age, int avgGrade, int classYear)
    : _name(new char[strlen(name)+1]), 
    _fn(new char[strlen(fn) + 1]), 
    _age(age), _avgGrade(avgGrade), 
    _classYear(classYear)
{
    strcpy(_name, name);
    strcpy(_fn, fn);
}

Student::Student(const Student &rhs) 
    : _name(new char[strlen(rhs._name) + 1]), 
    _fn(new char[strlen(rhs._fn) + 1]), 
    _age(rhs._age), 
    _avgGrade(rhs._avgGrade), 
    _classYear(rhs._classYear) 
{
    strcpy(_name, rhs._name);
    strcpy(_name, rhs._name);
}

Student::~Student() {
    delete _name;
    delete _fn;
}

Student &Student::operator=(const Student &rhs) {

    if (this != &rhs) {
        delete _name;
        delete _fn;

        _name = new char[strlen(rhs._name) + 1];
        _fn = new char[strlen(rhs._fn) + 1];

        strcpy(_name, rhs._name);
        strcpy(_name, rhs._name);

        _age = rhs._age;
        _avgGrade = rhs._avgGrade;
        _classYear = rhs._classYear;
    }

    return *this;
}

std::ostream& Student::ins(std::ostream& out) const {
    out << _name << "\n" << _fn << "\n" << _age << "\n" << _avgGrade << "\n" << _classYear << std::endl;

    return out;
}

std::istream& Student::ext(std::istream& in) {
    const int maxLenght = 30;
    char newName[maxLenght];
    char newFn[maxLenght];

    in >> newName >> newFn;

    delete _name;
    delete _fn;

    _name = new char[strlen(newName) + 1];
    _fn = new char[strlen(newFn) + 1];

    strcpy(_name, newName);
    strcpy(_fn, newFn);

    try {

        in >> _age; if (_age <= 0) { throw 1; }
        in >> _avgGrade; if (_avgGrade <= 0) { throw 2; }
        in >> _classYear; if (_classYear <= 0) { throw 3; }
        
    }
    catch (int er) {
        const char* invalidMemberName;
        int *invalidMember;
        char answ;

        switch (er)
        {
        case 1:
            invalidMemberName = "age";
            invalidMember = &_age;
            break;
        case 2:
            invalidMemberName = "average grade";
            invalidMember = &_avgGrade;
            break;
        case 3:
            invalidMemberName = "class year";
            invalidMember = &_classYear;
            break;
        }

        std::cout << "Invalid value for " << invalidMemberName << ".\n";
        std::cout << "Re-enter value? Y/N: ";
        // This part bellow does not work. :(
        in >> answ;

        if (answ == 'Y') {
            do {
                std::cout << "\nEnter new value: ";
                in >> *invalidMember;
            } while (*invalidMember <= 0);
        }
        else {
            throw;
        }
    }

    return in;
}


std::ostream& operator<<(std::ostream& out, const Student& rhs) {
    return rhs.ins(out);
}

std::istream& operator>>(std::istream& in, Student& rhs) {
    return rhs.ext(in);
}
