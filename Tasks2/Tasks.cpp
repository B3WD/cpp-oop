//
// Created by tzvet on 13.4.2021 г..
//

#include "Tasks.h"

CntObjects::CntObjects(int num):_num(num){
    _assigned = 0;
}

CntObjects::~CntObjects(){
    std::cout << "Obejct with var = " << _num << " was assigned to " << _assigned << " times.\n";
}

CntObjects& CntObjects::operator=(const CntObjects& rhs){
    if(this != &rhs){
        if(_num < rhs._num){
            _assigned++;
        }
        _num = rhs._num;
    }

    return *this;
}

//
// Zad2
//

Prog::Prog(double a0, double a1, double k, double m )
:_a0(a0), _a1(a1), _k(k), _m(m){

}

Prog::~Prog(){

}

double Prog::operator[](int i) const{
    double a = _a0, b = _a1, newA = 0;

    if(i == 0){
        return _a0;
    }

    if(i == 1){
        return _a1;
    }

    for(int j = 2; j <= i; j++){
        newA = a + b + (j-1) * (j-1) + _k/_m;
        b = a;
        a = newA;
    }
return newA;
}

double Prog::operator()(int i) const{
    double sum = 0;

    for(int j = 0; j < i; j++){
        sum += operator[](j);
    }

    return sum;
}

//
// zad3
//

// v3 = rand() % 490 + 10;
randArr::randArr(){
    for(int i = 0; i < 50; i++){
        _arr[i] = rand() % 490 + 10;
    }
}

randArr::~randArr(){

}

std::ostream& randArr::ins(std::ostream& out) const{
    int sorted[50];
    sortedArr(sorted);

    for(int i = 0; i < 50; i++){
        out << sorted[i] << " ";
    }
    return out;
}

int* randArr::sortedArr(int *arr) const{

    for(int i = 0; i < 50; i++){
        arr[i] = _arr[i];
    }
    std::sort(arr, arr+50);
    return arr;
}

std::ostream& operator<<(std::ostream& out, const randArr& rhs){
    return rhs.ins(out);
}