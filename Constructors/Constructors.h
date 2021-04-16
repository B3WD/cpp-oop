//
// Created by tzvet on 13.4.2021 г..
//

#ifndef CONSTRUCTORS_CONSTRUCTORS_H
#define CONSTRUCTORS_CONSTRUCTORS_H


#include <cstdlib>

class Int{
    int n;
public:
    // Program will not compile without the constructor below.
    Int(){
        // If the body is empty
        n=rand()%10000;
    }
    //Два предефинирани конструктора с по един параметър
    Int(unsigned up){
        n=rand()%up;
    }

    Int(int n):n(n){}

    int getN(){return n;}
};


#endif //CONSTRUCTORS_CONSTRUCTORS_H
