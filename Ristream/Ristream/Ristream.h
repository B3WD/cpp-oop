#pragma once

#include <iostream>

class Ristream {
private:
	int _sz;
	char* _data;
	bool _ws;

public:
	Ristream(int sz = 0, bool ws = false);

	void genNew();
	void genNew(int sz, bool ws);

	std::ostream& ins(std::ostream& out) const;
};

std::ostream& operator<<(std::ostream& out, const Ristream& rhs);
