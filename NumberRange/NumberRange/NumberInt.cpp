#include "NumberInt.h"


NumberInt::NumberInt(int start, int end) :_start(start), _end(end) {
	_n = end - start + 1;
}

NumberInt::NumberInt(const NumberInt& rhs) : _start(rhs._start), _end(rhs._end), _n(rhs._n) {}
NumberInt::~NumberInt() {}

NumberInt& NumberInt::operator=(const NumberInt& rhs) {
	if (this != &rhs) {
		_start = rhs._start;
		_end = rhs._end;
		_n = rhs._n;
	}

	return *this;
}

int NumberInt::operator()(int l, int r) const
{
	int sum = 0;
	if (l >= _start && r <= _end) {
		sum = _n * (l + r) / 2;
	}

	return sum;
}

int NumberInt::operator()() const {
	return operator()(_start, _end);
}

std::ostream& NumberInt::ins(std::ostream& out) const {

	out << "(";
	for (int i = _start; i < _end; i++) {
		out << i << ", ";
	}
	out << _end << ")";

	return out;
}

std::istream& NumberInt::ext(std::istream& in) {
	in >> _start >> _end;

	return in;
}

std::ostream& operator<<(std::ostream& out, const NumberInt& rhs) {
	return rhs.ins(out);
}

std::istream& operator>>(std::istream& in, NumberInt& rhs) {
	return rhs.ext(in);
}