#pragma once

#include <iostream>

class Ristream2 {
private:
	int _sz;
	bool _ws;

public:
	Ristream2(int sz = 0, bool ws = false);
	~Ristream2();

	void fillCharArr(char* arr);

	Ristream2& operator>>(char* rhs);
	Ristream2& operator>>(int& rhs);
};
