#pragma once

#include "Phone.h"


class MobilePhone : public Phone {
private:
	char* _np;
	int _mem;

public:
	MobilePhone(const char* number = "null",
		const char* brand = "null",
		double price = 0,
		int year = 0,
		const char* np = "null",
		int mem = 0);

	MobilePhone(const MobilePhone& rhs);
	~MobilePhone();

	MobilePhone& operator=(const MobilePhone& rhs);

	virtual std::ostream& ins(std::ostream& out) const;
	virtual std::istream& ext(std::istream& in);
};