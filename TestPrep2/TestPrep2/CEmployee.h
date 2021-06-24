#pragma once

#include <iostream>

class CEmployee {
private:
	char _name[21];
	double _salary;
	unsigned _employmentYear;

public:
	CEmployee(const char* name = "null", double salary = 0, unsigned employmentYear = 0);
	CEmployee(const CEmployee& rhs);
	virtual ~CEmployee();

	CEmployee& operator=(const CEmployee& rhs);

	virtual std::ostream& ins(std::ostream& out) const;
	virtual std::istream& ext(std::istream& in);
};

std::ostream& operator<<(std::ostream& out, const CEmployee& rhs);
std::istream& operator>>(std::istream& in, CEmployee& rhs);