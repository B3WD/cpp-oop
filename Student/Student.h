//
// Created by tzvet on 29.3.2021 г..
//

#ifndef Z1_STUDENT_H
#define Z1_STUDENT_H


class Student {
private:
    char *_name;
    char *_fn;
    int _age;
    int _avgGrade;
    int _classYear;

public:
    Student();
    Student(char* name, char* fn, int age, int avgGrade, int classYear);
    Student(const Student& rhs);
    ~Student();
    Student& operator=(const Student& rhs);

};


#endif //Z1_STUDENT_H
