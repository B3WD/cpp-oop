#include "Vehicle.h"

Vehicle::Vehicle(const char* model, const char* num, unsigned year, unsigned km) 
	: _year(year), _km(km)
{
	strcpy(_model, model);
	strcpy(_num, num);
}

Vehicle::Vehicle(const Vehicle& rhs) 
	: _year(rhs._year), _km(rhs._km)
{
	strcpy(_model, rhs._model);
	strcpy(_num, rhs._num);
}

Vehicle::~Vehicle()
{
}

Vehicle& Vehicle::operator=(const Vehicle& rhs)
{
	if (this != &rhs) {
		_year = rhs._year;
		_km = rhs._km;
		strcpy(_model, rhs._model);
		strcpy(_num, rhs._num);
	}

	return *this;
}

std::ostream& Vehicle::ins(std::ostream& out) const
{
	out << _model << " " << _num << " " << _year << " " << _km;
	return out;
}

std::istream& Vehicle::ext(std::istream& in)
{
	in.getline(_model, 21);
	in >> _num >> _year >> _km;
	in.ignore();

	return in;
}

std::ostream& operator<<(std::ostream& out, const Vehicle& rhs)
{
	return rhs.ins(out);
}

std::istream& operator>>(std::istream& in, Vehicle& rhs)
{
	return rhs.ext(in);
}
