//
// Created by tzvet on 29.4.2021 г..
//

#include "AutomobileArr.h"

AutomobileArr::AutomobileArr(Automobile *AMobileArr, int sz)
:_AMobileArr(new Automobile[sz]), _sz(sz) {
    cpyMobileArr(_AMobileArr, AMobileArr, _sz);
};

AutomobileArr::AutomobileArr(const AutomobileArr &rhs)
:_AMobileArr(new Automobile[rhs._sz]), _sz(rhs._sz){
    cpyMobileArr(_AMobileArr, rhs._AMobileArr, _sz);
};

AutomobileArr::~AutomobileArr(){
    delete[] _AMobileArr;
}

AutomobileArr& AutomobileArr::operator=(const AutomobileArr &rhs){
    if(this != &rhs){
        delete[] _AMobileArr;
        _AMobileArr = new Automobile[rhs._sz];
        cpyMobileArr(_AMobileArr, rhs._AMobileArr, _sz);

        _sz = rhs._sz;
    }

    return *this;
}

std::ostream& AutomobileArr::ins(std::ostream &out) const{
    for(int i = 0; i < _sz; i++){
        out << _AMobileArr[i] << "\n";
    }
    return out;
}

Automobile AutomobileArr::operator[](unsigned i) const{
    return _AMobileArr[i];
}

void AutomobileArr::cpyMobileArr(Automobile *dest, Automobile *source, int sz) {
    for(int i = 0; i < sz; i++){
        dest[i] = source[i];
    }
}

std::ostream& operator<<(std::ostream &out, const AutomobileArr &rhs){
    return rhs.ins(out);
}