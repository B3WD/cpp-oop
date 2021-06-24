#pragma once

#include <iostream>
#include <string>

class PTask {
private:
	char _name[21];
	double _price;

public:
	PTask(const char* name = "null", double price = 0);
	PTask(const PTask& rhs);
	~PTask();
	
	PTask& operator=(const PTask& rhs);

	std::ostream& ins(std::ostream& out) const;
	std::istream& ext(std::istream& in);
};

std::ostream& operator<<(std::ostream& out, const PTask& rhs);
std::istream& operator>>(std::istream& in, PTask& rhs);