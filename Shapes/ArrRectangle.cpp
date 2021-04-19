//
// Created by tzvet on 19.4.2021 г..
//

#include "ArrRectangle.h"

ArrRectangle::ArrRectangle(unsigned sz, Rectangle *arr)
:_sz(sz), _arr(new Rectangle[sz]){

    for(int i = 0; i < sz; i++){
        _arr[i] = arr[i];
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
