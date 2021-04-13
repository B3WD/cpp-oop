//
// Created by tzvet on 29.3.2021 г..
//

#include "Student.h"
#include <cstring>

Student::~Student() {

}

Student::Student() {

}

Student::Student(char *name, char *fn, int age, int avgGrade, int classYear) {

}

Student::Student(const Student &rhs) {
    _name = new char[strlen(rhs._name)+1];
    strcpy(_name, rhs._name);

    _fn = new char[strlen(rhs._name)+1];
    strcpy(_name, rhs._name);

    _age = rhs._age;
    _avgGrade = rhs._avgGrade;
    _classYear = rhs._classYear;
}

Student &Student::operator=(const Student &rhs) {

    return <#initializer#>;
}
