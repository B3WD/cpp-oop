#include "Phone.h"

Phone::Phone(const char* number, const char* brand, double price, int year)
	: _number(new char[strlen(number)+1]), _brand(new char[strlen(brand)+1]), _price(price), _year(year)
{
	strcpy(_number, number);
	strcpy(_brand, brand);
}

Phone::Phone(const Phone& rhs)
	: _number(new char[strlen(rhs._number) + 1]), _brand(new char[strlen(rhs._brand) + 1]), _price(rhs._price), _year(rhs._year)
{
	strcpy(_number, rhs._number);
	strcpy(_brand, rhs._brand);
}

Phone::~Phone()
{
	delete _number;
	delete _brand;
}

Phone& Phone::operator=(const Phone& rhs)
{
	if (this != &rhs) {
		delete _number;
		delete _brand;

		_number = new char[strlen(rhs._number) + 1];
		_brand = new char[strlen(rhs._brand) + 1];
		strcpy(_number, rhs._number);
		strcpy(_brand, rhs._brand);

		_price = rhs._price;
		_year = rhs._year;
	}

	return *this;
}

bool Phone::operator>(const Phone& rhs)
{
	return _price > rhs._price;
}

bool Phone::operator<(const Phone& rhs)
{
	return _price < rhs._price;
}

std::ostream& Phone::ins(std::ostream& out) const
{
	out << _number << " " << _brand << " " << _price << " " << _year;
	return out;
}

std::istream& Phone::ext(std::istream& in)
{
	in >> _number >> _brand >> _price >> _year;
	return in;
}

std::ostream& operator<<(std::ostream& out, const Phone& rhs)
{
	return rhs.ins(out);
}

std::istream& operator>>(std::istream& in, Phone& rhs)
{
	return rhs.ext(in);
}
