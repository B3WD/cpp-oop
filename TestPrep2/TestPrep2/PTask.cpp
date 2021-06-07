#include "PTask.h"

PTask::PTask(const char* name, double price) : _price(price) {
	strcpy(_name, name);
}

PTask::PTask(const PTask& rhs) : _price(rhs._price) {
	strcpy(_name, rhs._name);
}

PTask::~PTask() {  }

PTask& PTask::operator=(const PTask& rhs)
{
	if (this != &rhs) {
		strcpy(_name, rhs._name);
		_price = rhs._price;
	}

	return *this;
}

std::ostream& PTask::ins(std::ostream& out) const
{
	out << _name << " " << _price;
	return out;
}

std::istream& PTask::ext(std::istream& in)
{
	in.getline(_name, 21);
	in >> _price;
	in.ignore();

	return in;
}

std::ostream& operator<<(std::ostream& out, const PTask& rhs)
{
	return rhs.ins(out);
}

std::istream& operator>>(std::istream& in, PTask& rhs)
{
	return rhs.ext(in);
}
