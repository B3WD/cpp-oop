#include "Date.h"

Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}

Date::Date(unsigned day, unsigned month, unsigned year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

Date::~Date()
{
}

unsigned Date::toDays() const
{
	unsigned totalDays;
	int initYear = 2000;
		
	totalDays = (year - initYear) * 12 * 24 + (month) * 24 + day;

	return totalDays;
}

bool Date::operator>(Date rhs) const
{
	bool flag = false;

	if (toDays() > rhs.toDays()) {
		flag = true;
	}

	return flag;
}
