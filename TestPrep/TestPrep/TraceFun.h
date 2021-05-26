#pragma once

#include <iostream>

class TraceFun {
private:
	char* _name;
	std::ostream& _out;

public:
	TraceFun(const char* name = "null", std::ostream& out = std::cout);
	~TraceFun();
};
