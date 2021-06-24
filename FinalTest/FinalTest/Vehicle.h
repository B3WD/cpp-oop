#pragma once

#include <iostream>

class Vehicle {
private:
	char _model[21];
	char _num[9];
	unsigned _year,
			 _km;

public:
	Vehicle(const char* model = "null", const char* num = "null", unsigned year = 0, unsigned km = 0);
	Vehicle(const Vehicle& rhs);
	virtual ~Vehicle();

	Vehicle& operator=(const Vehicle& rhs);

	virtual std::ostream& ins(std::ostream& out) const;
	virtual std::istream& ext(std::istream& in);
};

std::ostream& operator<<(std::ostream& out, const Vehicle& rhs);
std::istream& operator>>(std::istream& in, Vehicle& rhs);