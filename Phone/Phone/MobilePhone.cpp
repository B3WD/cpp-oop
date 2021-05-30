#include "MobilePhone.h"

MobilePhone::MobilePhone(const char* number, const char* brand, double price, int year, const char* np, int mem)
	:Phone(number, brand, price, year), _np(new char[strlen(np)+1]), _mem(mem)
{
	strcpy(_np, np);
}

MobilePhone::MobilePhone(const MobilePhone& rhs)
	:Phone(rhs), _np(new char[strlen(rhs._np) + 1]), _mem(rhs._mem)
{
	strcpy(_np, rhs._np);
}

MobilePhone::~MobilePhone()
{
	delete _np;
}

MobilePhone& MobilePhone::operator=(const MobilePhone& rhs)
{
	if (this != &rhs) {
		Phone::operator=(rhs);

		delete _np;
		_np = new char[strlen(rhs._np) + 1];
		strcpy(_np, rhs._np);

		_mem = rhs._mem;
	}

	return *this;
}

std::ostream& MobilePhone::ins(std::ostream& out) const
{
	Phone::ins(out);
	return out << " " << _np << " " << _mem;
}

std::istream& MobilePhone::ext(std::istream& in)
{
	Phone::ext(in);
	return in >> _np >> _mem;
}
