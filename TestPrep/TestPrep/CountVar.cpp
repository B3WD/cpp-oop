#include "CountVar.h"

CountVar::CountVar(double val, const char* name, std::ostream& out) 
	: _val(val), _name(new char[strlen(name)+1]), _out(out)
{
	strcpy(_name, name);
}

CountVar::~CountVar()
{
	_out << _name << " was used " << _usedCount << " times and was assigned to " << _assignedCount << " times.\n";
	delete _name;
}

CountVar::operator double()
{
	_usedCount++;
	return _val;
}

CountVar& CountVar::operator=(const CountVar& rhs)
{
	if (this != &rhs) {
		_val = rhs._val;
		_assignedCount++;
	}

	return *this;
}
