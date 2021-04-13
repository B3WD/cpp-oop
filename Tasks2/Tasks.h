//
// Created by tzvet on 13.4.2021 г..
//

#ifndef L4T_TASKS_H
#define L4T_TASKS_H

#include <iostream>
#include <algorithm>

class CntObjects{
private:
    int _num, _assigned;
public:
    CntObjects(int num = 0);
    ~CntObjects();

    CntObjects& operator=(const CntObjects& rhs);
};


class Prog{
private:
    double _a0, _a1, _k, _m;
public:
    Prog(double a0 = 0, double a1 = 0, double k = 0, double m = 0);
    ~Prog();

    double operator[](int i) const;
    double operator()(int i) const;

};

//
// zad3
//

class randArr{
private:
    int _arr[50];
public:
    randArr();
    ~randArr();

    int* sortedArr(int* arr) const;
    std::ostream& ins(std::ostream& out) const;

};

std::ostream& operator<<(std::ostream& out, const randArr& rhs);

#endif //L4T_TASKS_H
