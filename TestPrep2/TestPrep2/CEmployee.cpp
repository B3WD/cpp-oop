#include "CEmployee.h"


CEmployee::CEmployee(const char* name, double salary, unsigned employmentYear)
	: _salary(salary), _employmentYear(employmentYear)
{
	strcpy(_name, name);
}

CEmployee::CEmployee(const CEmployee& rhs) : _salary(rhs._salary), _employmentYear(rhs._employmentYear)
{
	strcpy(_name, rhs._name);
}

CEmployee::~CEmployee() {  }

CEmployee& CEmployee::operator=(const CEmployee& rhs)
{
	if (this != &rhs) {
		strcpy(_name, rhs._name);
		_salary = rhs._salary;
		_employmentYear = rhs._employmentYear;
	}

	return *this;
}

std::ostream& CEmployee::ins(std::ostream& out) const
{
	out << _name << " " << _salary << " " << _employmentYear;

	return out;
}

std::istream& CEmployee::ext(std::istream& in)
{
	in.getline(_name, 21);
	in >> _salary >> _employmentYear;
	in.ignore();

	return in;
}

std::ostream& operator<<(std::ostream& out, const CEmployee& rhs)
{
	return rhs.ins(out);
}

std::istream& operator>>(std::istream& in, CEmployee& rhs)
{
	return rhs.ext(in);
}
