#include "RangeVar.h"

RangeVar::RangeVar(double val, const char* name, std::ostream& out)
	: _val(val), _name(new char[strlen(name) + 1]), _out(out), _assignedMax(val), _assignedMin(val)
{
	strcpy(_name, name);
}

RangeVar::~RangeVar()
{
	_out << _name << " had min/max values of " << _assignedMin << "/" << _assignedMax << "\n";
	delete _name;
}

RangeVar::operator double()
{
	return _val;
}

RangeVar& RangeVar::operator=(const RangeVar& rhs)
{
	if (this != &rhs) {
		if (_assignedMax < rhs._val) {
			_assignedMax = rhs._val;
		}
		if (_assignedMin > rhs._val) {
			_assignedMin = rhs._val;
		}

		_val = rhs._val;
	}

	return *this;
}
