//
// Created by tzvet on 19.4.2021 г..
//

#include "ArrRectangle.h"

ArrRectangle::ArrRectangle(unsigned sz, Rectangle *arr)
:_sz(sz), _arr(new Rectangle[sz]){

    if(arr!= nullptr){
        for(int i = 0; i < sz; i++){
            _arr[i] = arr[i];
        }
    }

}

ArrRectangle::ArrRectangle(const ArrRectangle& rhs)
:_sz(rhs._sz), _arr(new Rectangle[rhs._sz]){

    for(int i = 0; i < _sz; i++){
        _arr[i] = rhs._arr[i];
    }
}

ArrRectangle::~ArrRectangle(){
    delete[] _arr;
}

ArrRectangle& ArrRectangle::operator=(const ArrRectangle& rhs){
    if(this != &rhs){
        _sz = rhs._sz;

        delete[] _arr;
        _arr = new Rectangle[rhs._sz];

        for(int i = 0; i < _sz; i++){
            _arr[i] = rhs._arr[i];
        }
    }

    return *this;
}

Rectangle ArrRectangle::operator[](unsigned i) const{
    return _arr[i];
}

Rectangle& ArrRectangle::operator[](unsigned i){
    return _arr[i];
}

Rectangle ArrRectangle::operator()() const {
    unsigned maxI = 0;

    for(int i = 1; i < _sz; i++){
        if(_arr[i] > _arr[maxI]){
            maxI = i;
        }
    }

    return _arr[maxI];
}
