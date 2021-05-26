#include "TraceFun.h"

TraceFun::TraceFun(const char* name, std::ostream& out) :_name(new char[strlen(name) + 1]), _out(out)
{
	strcpy(_name, name);
	_out << _name << " starts here.\n";
}

TraceFun::~TraceFun()
{
	_out << _name << " ends here.\n";
	delete _name;
}