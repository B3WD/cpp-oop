#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"

int main() {

    Square sq1(4);
    Rectangle rec1(7, 8);

    std::cout << "Square: " << sq1 << "\n";
    std::cout << "Rectangle: " << rec1 << "\n";

    std::cout << (Rectangle(5, 5) < Rectangle(4, 5));

    return 0;
}
