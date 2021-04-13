//
// Created by tzvet on 6.4.2021 г..
//

#include "Tasks.h"

TraceFun::TraceFun(const char* name, std::ostream& stream) : _name(new char[strlen(name)+1]), _stream(stream){
    strcpy(_name, name);
    _stream << "Function " << _name << " starts here.\n";
}

TraceFun::~TraceFun(){
    _stream << "Function " << _name << " ends here.\n";

    if(_name!= nullptr){
        delete[] _name;
        _name = nullptr;
    }
}

CountVar::CountVar(double value, const char* name, std::ostream & out) : _value(value), _name(new char[strlen(name)+1]), _out(out){
        strcpy(_name, name);
        _usedCount = 0;
        _assignedCount = 0;
}

CountVar::~CountVar(){
    _out << _name << " with value " << _value << " was used " << _usedCount << " times, and was assigned " << _assignedCount << " times.\n";
}

CountVar& CountVar::operator=(const CountVar& rhs){
    _assignedCount++;
    if(this!=&rhs){
        _value = rhs._value;
    }

    return *this;
}

CountVar::operator double(){
    _usedCount++;
    return _value;
}


RangeVar::RangeVar(double value, const char *name, std::ostream& out):_value(value), _name(new char[strlen(name)+1]), _out(out){
    strcpy(_name, name);
    _min = value;
    _max = value;
}

RangeVar::~RangeVar(){
    _out << _name << "had min, max = " << _min << ", " << _max << "\n";

    if(_name!= nullptr){
        delete[] _name;
        _name = nullptr;
    }
}

RangeVar& RangeVar::operator=(const RangeVar& rhs){
    if(this!=&rhs){
        _value = rhs._value;
        if(rhs._value > _max){ _max = rhs._value; }
        if(rhs._value < _min){ _min = rhs._value; }
    }
    return *this;
}

RangeVar::operator double (){
 return _value;
}


AProg::AProg(double init, double step):_init(init), _step(step){

}

AProg::~AProg(){

}

double AProg::operator[](int i) const{
    double n = _init;
    if(i >= 1) {
        n = _init + (i) * _step;
    }

    return n;
}

double AProg::operator()(int i) const {
    return ((_init + (*this)[i]) / 2) * i;
}

// PHONE CLASS
/* Phone::Phone(long long number, const char* brand, double price, int year): _number(number), _brand(new char[strlen(brand) + 1]), _price(price), _year(year){

}

Phone::Phone(const Phone&){

}

Phone::~Phone(){

}

Phone& Phone::operator=(const Phone& rhs){

}

bool Phone::operator<(const Phone& rhs) const{

}

bool Phone::operator>(const Phone& rhs) const{

}

std::ostream& ins(std::ostream &) const{

}

std::istream& ext(std::ostream &){

} */