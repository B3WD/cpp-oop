#pragma once

#include "NumberInt.h"

class NumberIntK{
private:
	int _k, _groupCount;
	NumberInt* _kArrs;

public:
	NumberIntK(int k = 0, NumberInt &interval = NumberInt(0, 0));
	NumberIntK(const NumberIntK& rhs);
	~NumberIntK();

	int operator()(unsigned i) const;
	NumberInt operator[](unsigned i) const;

	std::ostream& ins(std::ostream& out) const;
};

std::ostream& operator<<(std::ostream &out, const NumberIntK &rhs);