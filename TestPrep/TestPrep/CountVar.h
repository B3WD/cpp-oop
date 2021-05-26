// CountVar.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

class CountVar {
private:
	int _assignedCount = 0, 
		_usedCount = 0;
	double _val;
	char* _name;
	std::ostream& _out;

public:
	CountVar(double val = 0, const char* name = "null", std::ostream& out = std::cout);
	~CountVar();

	operator double();
	CountVar& operator=(const CountVar& rhs);

};
