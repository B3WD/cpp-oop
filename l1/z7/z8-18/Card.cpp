#include "Card.h"
#include <iostream>

Card::Card() : bookName(""), author(""), count(0)
{
	std::cout << "Default constructor was called." << std::endl;
}

Card::Card(const char* bookName, const char* author, unsigned count) : bookName(bookName), author(author), count(count)
{
	std::cout << "Param constructor was called." << std::endl;
}

Card::~Card()
{
	std::cout << "Deconstructor was called." << std::endl;
}

int Card::print() const
{
	std::cout << "Book name: " << bookName << std::endl;
	std::cout << "Author: " << author << std::endl;
	std::cout << "Copies left: " << count << std::endl;

	return 0;
}
