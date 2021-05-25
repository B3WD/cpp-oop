//
// Created by tzvet on 29.3.2021 г..
//

#ifndef Z1_STUDENT_H
#define Z1_STUDENT_H

#include <iostream>

class Student {
private:
    char *_name;
    char *_fn;
    int _age;
    int _avgGrade;
    int _classYear;

public:
    Student(const char* name = "null", 
            const char* fn = "null",
            int age = 0, 
            int avgGrade = 0, 
            int classYear = 0);

    Student(const Student& rhs);
    ~Student();
    Student& operator=(const Student& rhs);

    std::ostream& ins(std::ostream& out) const;
    std::istream& ext(std::istream& in);

};

std::ostream& operator<<(std::ostream& out, const Student& rhs);
std::istream& operator>>(std::istream& in, Student& rhs);


#endif //Z1_STUDENT_H
