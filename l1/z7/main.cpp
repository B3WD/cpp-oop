#include "Card.h"

int main() {

    const char* bookName = "C++ Programming book";
    const char* author = "M. Raykova";

    Card cppBook(bookName, author, 27);

    cppBook.print();

    return 0;
}