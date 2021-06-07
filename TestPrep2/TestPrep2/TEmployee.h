#pragma once

#include <iostream>

template<typename T>
class TEmployee {
private:
	char _name[21];
	T _salary;
	unsigned _employmentYear;

public:
	TEmployee(const char* name = "null", T salary = T(), unsigned employmentYear = 0);
	TEmployee(const TEmployee<T>& rhs);
	virtual ~TEmployee();

	TEmployee<T>& operator=(const TEmployee<T>& rhs);

	virtual std::ostream& ins(std::ostream& out) const;
	virtual std::istream& ext(std::istream& in);
};

template<typename T>
std::ostream& operator<<(std::ostream& out, const TEmployee<T>& rhs);

template<typename T>
std::istream& operator>>(std::istream& in, TEmployee<T>& rhs);

template<typename T>
TEmployee<T>::TEmployee(const char* name, T salary, unsigned employmentYear)
	: _salary(salary), _employmentYear(employmentYear)
{
	strcpy(_name, name);
}

template<typename T>
TEmployee<T>::TEmployee(const TEmployee& rhs) : _salary(rhs._salary), _employmentYear(rhs._employmentYear)
{
	strcpy(_name, rhs._name);
}

template<typename T>
TEmployee<T>::~TEmployee() {  }

template<typename T>
TEmployee<T>& TEmployee<T>::operator=(const TEmployee<T>& rhs)
{
	if (this != &rhs) {
		strcpy(_name, rhs._name);
		_salary = rhs._salary;
		_employmentYear = rhs._employmentYear;
	}

	return *this;
}

template<typename T>
std::ostream& TEmployee<T>::ins(std::ostream& out) const
{
	out << _name << " " << _salary << " " << _employmentYear;

	return out;
}

template<typename T>
std::istream& TEmployee<T>::ext(std::istream& in)
{
	in.getline(_name, 21);
	in >> _salary >> _employmentYear;
	in.ignore();

	return in;
}

template<typename T>
std::ostream& operator<<(std::ostream& out, const TEmployee<T>& rhs)
{
	return rhs.ins(out);
}

template<typename T>
std::istream& operator>>(std::istream& in, TEmployee<T>& rhs)
{
	return rhs.ext(in);
}
