#include <iostream>
#include "pointArray.h"

int main() {

    pointArray p1(3);
    p1.printPoints();

    p1.scale(2, -1, 0.5);

    p1.printPoints();

    p1.translate(1, 0, 1000);

    p1.printPoints();

    return 0;
}
