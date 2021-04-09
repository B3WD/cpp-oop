#include "Card.h"
#include <iostream>

int main() {

    Card cppBook("C++ Programming book", "M. Raykova", 27);

    Card cBook = cppBook;

    cBook = Card("Java", "Lol", 1);

    std::cout << cBook << std::endl;
    std::cout << cppBook << std::endl;

    return 0;
}