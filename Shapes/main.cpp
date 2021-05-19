#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "ArrRectangle.h"
#include "Point.h"

void fillShapeArr(Shape* *arr, int len) {
    for (int i = 0; i < len; i++) {
        if (i % 2 == 0) {
            arr[i] = new Square(i);
        }
        else {
            arr[i] = new Rectangle(i, i);
        }
    }
}

void t1() {
    Square sq1(4);
    Rectangle rec1(7, 8);
    Rectangle rec2(3, 4);

    std::cout << "Square: " << sq1 << "\n";
    std::cout << "Rectangle: " << rec1 << "\n";

    std::cout << (Rectangle(5, 5) < Rectangle(4, 5)) << std::endl;

    Rectangle recArr[2] = { rec1, rec2 };
    ArrRectangle recArrObj(2, recArr);

    std::cout << recArrObj();
}

void t2() {
    int len = 10;
    Shape** shapeArr = new Shape*[len];
    fillShapeArr(shapeArr, len);

    std::cout << *shapeArr[7] << std::endl;
    std::cout << *shapeArr[8] << std::endl;

    if (dynamic_cast<Square*>(shapeArr[9]) != nullptr) { std::cout << "Object is square!"; }
}

int main() {

    Point p1(1, 1), p2(3, 3);

    std::cout << p1.distanceTo(p2) << std::endl;

    Rectangle r1(p1, p2), r2;
    std::cin >> r2;

    std::cout << "Rect from points. P = " << r1.P() << std::endl;
    std::cout << "Rect with ext. S = " << r2.S() << std::endl;

    return 0;
}
