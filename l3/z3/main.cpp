#include <iostream>
#include "Tasks.h"

int testFunc(int a, int b);
void testClassCountVar(int n);

int main() {

    // testFunc(27, 42);
    testClassCountVar(10);
}

int testFunc(int a, int b){
    TraceFun f("testFunc", std::cout);

    return a*b;
}

void testClassCountVar(int n){
    CountVar a(7.7, "varA", std::cout);
    for(int i = 0; i < n; i++){
        a = a + i*0.2;
        a + 1;
    }
}