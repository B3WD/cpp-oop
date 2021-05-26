#pragma once

#include <iostream>

class RangeVar {
private:
	int _assignedMin,
		_assignedMax;
	double _val;
	char* _name;
	std::ostream& _out;

public:
	RangeVar(double val = 0, const char* name = "null", std::ostream& out = std::cout);
	~RangeVar();

	operator double();
	RangeVar& operator=(const RangeVar& rhs);

};