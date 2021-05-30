#include "SmartPhone.h"

SmartPhone::SmartPhone(
	const char* number, 
	const char* brand, 
	double price, 
	int year, 
	const char* np, 
	int mem, 
	const char* os, 
	int gen)
	: MobilePhone(number, brand, price, year, np, mem), _os(new char[strlen(os)+1]), _gen(gen)
{
	strcpy(_os, os);
}

SmartPhone::SmartPhone(const SmartPhone& rhs) : MobilePhone(rhs), _os(new char[strlen(rhs._os) + 1]), _gen(rhs._gen)
{
	strcpy(_os, rhs._os);
}

SmartPhone::~SmartPhone()
{
	delete _os;
}

std::ostream& SmartPhone::ins(std::ostream& out) const
{
	MobilePhone::ins(out);
	return out << " " << _os << " " << _gen;
}

std::istream& SmartPhone::ext(std::istream& in)
{
	MobilePhone::ext(in);
	return in >> _os >> _gen;
}
