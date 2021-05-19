#pragma once

#include <iostream>

class NumberInt {
private:
	int _start, _end, _n;

public:
	NumberInt(int start = 0, int end = 0);
	NumberInt(const NumberInt& rhs);
	~NumberInt();

	NumberInt& operator=(const NumberInt& rhs);

	int getStart() const { return _start; };
	int getEnd() const { return _end; };
	int getN() const { return _n; };

	int operator()(int l, int r) const;
	int operator()() const;

	virtual std::ostream& ins(std::ostream& out) const;
	virtual std::istream& ext(std::istream& in);

};

std::ostream& operator<<(std::ostream& out, const NumberInt& rhs);
std::istream& operator>>(std::istream& in, NumberInt& rhs);