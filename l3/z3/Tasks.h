//
// Created by tzvet on 6.4.2021 г..
//

#ifndef Z3_TASKS_H
#define Z3_TASKS_H

#include <iostream>
#include <cstring>

class TraceFun{
public:
    TraceFun(const char* name = "defaultName", std::ostream& stream = std::cout);
    ~TraceFun();

private:
    char* _name;
    std::ostream& _stream;
};

class CountVar{
public:
    CountVar(double value = 0, const char* name = "dafaultName", std::ostream & out = std::cout);
    ~CountVar();
    CountVar& operator=(const CountVar& rhs);

    operator double ();

private:
    int _usedCount, _assignedCount;
    double _value;
    char* _name;
    std::ostream & _out;

};

class RangeVar{
private:
    double _value;
    char *_name;
    std::ostream& _out;
    double _min, _max;

public:
    RangeVar(double value = 0, const char *name = "defaultName", std::ostream& = std::cout);
    RangeVar& operator=(const RangeVar& rhs);
    ~RangeVar();
    operator double ();

};

class AProg {
private:
    double _init, _step;

public:
    AProg(double _init = 0, double _step = 0);
    ~AProg();

    double operator[](int i) const;
    double operator()(int i) const;
};

// big 5, <, >, <<, >>,
/* class Phone{
private:
    long long _number;
    char * _brand;
    double _price;
    int _year;
public:
    Phone(long long number = 0, const char *name = "NoBrand", double price = 0, int year = 0);
    Phone(const Phone&);
    ~Phone();

    Phone& operator=(const Phone& rhs);
    bool operator<(const Phone& rhs) const;
    bool operator>(const Phone& rhs) const;

    virtual std::ostream& ins(std::ostream &) const;
    virtual std::istream& ext(std::ostream &);
};

class MobilePhone:public Phone{
private:
    char * provider;
    int memory;
};

class SmartPhone:public MobilePhone{
private:
    char * os;
    int generation;
}; */

#endif //Z3_TASKS_H
