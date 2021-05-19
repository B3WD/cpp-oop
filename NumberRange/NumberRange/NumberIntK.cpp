#include "NumberIntK.h"

NumberIntK::NumberIntK(int k, NumberInt &interval):_k(k)
{
	int l = interval.getStart(), r = interval.getEnd(), newL;
	_groupCount = interval.getN() / _k;

	_kArrs = new NumberInt[_groupCount];

	for (int i = 0; i < _groupCount; i++) {
		newL = l + _k * (i);
		_kArrs[i] = NumberInt(newL, newL + _k - 1);
	}
}

NumberIntK::NumberIntK(const NumberIntK& rhs):_k(rhs._k)
{
	delete _kArrs;
	_kArrs = new NumberInt[_k];
	memcpy(_kArrs, rhs._kArrs, _k);
}

NumberIntK::~NumberIntK()
{
	delete[] _kArrs;
}

int NumberIntK::operator()(unsigned i) const
{
	return _kArrs[i]();
}

NumberInt NumberIntK::operator[](unsigned i) const
{
	return _kArrs[i];
}

std::ostream& NumberIntK::ins(std::ostream& out) const
{
	for (int i = 0; i < _groupCount-1; i++) {
		out << _kArrs[i] << " ";
	}

	out << _kArrs[_groupCount - 1];
	return out;
}

std::ostream& operator<<(std::ostream& out, const NumberIntK& rhs)
{
	return rhs.ins(out);
}
