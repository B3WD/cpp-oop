//
// Created by tzvet on 9.4.2021 г..
//

#include "Card.h"

Card::Card(const char* bookName, const char* author, unsigned count)
: _bookName(new char[strlen(bookName) + 1]), _author(new char[strlen(author) + 1]), _count(count)
{
    strcpy(_bookName, bookName);
    strcpy(_author, author);
}

Card::~Card()
{
    delete[] _bookName;
    _bookName = nullptr;
    delete[] _author;
    _author = nullptr;
}

void Card::print() const
{
    std::cout << "Book name: " << _bookName << std::endl;
    std::cout << "Author: " << _author << std::endl;
    std::cout << "Copies left: " << _count << std::endl;
}

std::ostream &Card::ins(std::ostream &out) const {
    out << "Book name: " << _bookName << std::endl;
    out << "Author: " << _author << std::endl;
    out << "Copies left: " << _count << std::endl;

    return out;
}

std::ostream& operator<<(std::ostream& lhs, Card& rhs){
    return rhs.ins(lhs);
}