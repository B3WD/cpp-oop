#include <iostream>
#include "Tasks.h"

int testFunc(int a, int b);
void testClassCountVar(int n);
void testClassRangeVar();

int main() {

    // testFunc(27, 42);
    // testClassCountVar(10);
}

int testFunc(int a, int b){
    TraceFun f("testFunc", std::cout);

    return a*b;
}

void testClassCountVar(int n){
    TraceFun f("testClassCountVar", std::cout);
    CountVar a(7.7, "varA", std::cout);
    for(int i = 0; i < n; i++){
        a = a + i*0.2;  // Tuk svejda "a" do CountVar,
                        // za6toto imame defaulted constructor s
                        // default stoinosti.
        a + 1;
        CountVar b(99.9, "varB", std::cout);
        a = b;
    }
}

void testClassRangeVar(){
    TraceFun f("testClassRangeVar", std::cout);
    RangeVar a(2.4, "varA", std::cout);

    a = a + 7634.234;

}