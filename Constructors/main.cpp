#include <iostream>
#include "Constructors.h"

using namespace std;

void z1();

int main(){

    z1();

    return 0;
}

void z1(){
    Int a[10];
    for(int i=0;i<10;i++){
        cout<<a[i].getN()<<endl;
    }

    Int x(100);
    cout<<x.getN()<<endl;

    //Ако стойността на параметъра не е unsigned,
    //ще се използва конструкторът с параметър int.
    Int y(30000u);
    cout<<y.getN()<<endl;
}