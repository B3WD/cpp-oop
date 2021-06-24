// Ristream.cpp : Defines the entry point for the application.
//

#include "Ristream.h"

Ristream::Ristream(int sz, bool ws) : _sz(sz), _data(new char[sz + 1]), _ws(ws)
{
	genNew();
}

void Ristream::genNew()
{
	srand(time(0));

	for (int i = 0; i < _sz; i++) {
		_data[i] = rand() % ('~' - ' ') + ' ';
	}

	_data[_sz] = '\0';
}

void Ristream::genNew(int sz, bool ws)
{
	_sz = sz;
	_ws = ws;

	delete[] _data;
	_data = new char[_sz + 1];

	genNew();
}

std::ostream& Ristream::ins(std::ostream& out) const
{
	out << _data;

	return out;
}

std::ostream& operator<<(std::ostream& out, const Ristream& rhs) {
	return rhs.ins(out);
}