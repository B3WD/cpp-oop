#pragma once

class Date {
private:
	unsigned day;
	unsigned month;
	unsigned year;

public:
	Date();
	Date(unsigned day, unsigned month, unsigned year);
	~Date();

	int getDay() const { return day; }
	int getMonth() const { return month; }
	int getYear() const { return year; }

	unsigned toDays() const;
	bool operator>(Date) const;
};