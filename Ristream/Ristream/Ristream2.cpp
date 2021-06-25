// Ristream.cpp : Defines the entry point for the application.
//

#include "Ristream2.h"
#include <cmath>

Ristream2::Ristream2(int sz, bool ws) : _sz(sz), _ws(ws) {  }

Ristream2::~Ristream2() {  }

void Ristream2::fillCharArr(char* arr) {
	srand(time(0));

	for (int i = 0; i < _sz; i++) {
		arr[i] = rand() % ('~' - ' ') + ' ';
	}

	arr[_sz] = '\0';
}

Ristream2& Ristream2::operator>>(char* rhs)
{
	fillCharArr(rhs);

	return *this;
}

Ristream2& Ristream2::operator>>(int& rhs)
{
	srand(time(0));
	rhs = rand() % int(std::pow(10, _sz) - pow(10, _sz - 1) - 1) + pow(10, _sz - 1);

	return *this;
}
