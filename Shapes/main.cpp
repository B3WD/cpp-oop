#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "ArrRectangle.h"

int main() {

    Square sq1(4);
    Rectangle rec1(7, 8);
    Rectangle rec2(3, 4);

    std::cout << "Square: " << sq1 << "\n";
    std::cout << "Rectangle: " << rec1 << "\n";

    std::cout << (Rectangle(5, 5) < Rectangle(4, 5)) << std::endl;

    Rectangle recArr[2] = {rec1, rec2};
    ArrRectangle recArrObj(2, recArr);

    std::cout << recArrObj();

    return 0;
}
