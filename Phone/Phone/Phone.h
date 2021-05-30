#pragma once

#include <iostream>

class Phone {
private:
	char* _number;
	char* _brand;
	double _price;
	int _year;

public:
	Phone(const char* number = "null", const char* brand = "null", double price = 0, int year = 0);
	Phone(const Phone& rhs);
	virtual ~Phone();

	Phone& operator=(const Phone& rhs);

	virtual bool operator>(const Phone& rhs);
	virtual bool operator<(const Phone& rhs);

	virtual std::ostream& ins(std::ostream& out) const;
	virtual std::istream& ext(std::istream& in);
};

std::ostream& operator<<(std::ostream& out, const Phone& rhs);
std::istream& operator>>(std::istream& in, Phone& rhs);
