#pragma once

#include "MobilePhone.h"

class SmartPhone : public MobilePhone {
private:
	char* _os;
	int _gen;

public:
	SmartPhone(const char* number = "null",
		const char* brand = "null",
		double price = 0,
		int year = 0,
		const char* np = "null",
		int mem = 0,
		const char* os = "null",
		int gen = 0);

	SmartPhone(const SmartPhone& rhs);
	~SmartPhone();

	virtual std::ostream& ins(std::ostream& out) const;
	virtual std::istream& ext(std::istream& in);
};