#include "Bus.h"

Bus::Bus(const char* model, 
	const char* num, 
	unsigned year, 
	unsigned km, 
	unsigned seatC, 
	unsigned maxTickets,
	unsigned freeTickets, 
	const char* engine) 
	: Vehicle(model, num, year, km), 
	_seatC(seatC), 
	_maxTickets(maxTickets),
	_freeTickets(freeTickets)
{
	if (maxTickets > seatC || freeTickets > maxTickets || freeTickets > seatC) {
		throw 2;
	}

	strcpy(_engineType, engine);
}

Bus::Bus(const Bus& rhs) 
	: Vehicle(rhs), _seatC(rhs._seatC), _maxTickets(rhs._maxTickets), _freeTickets(rhs._freeTickets)
{
	if (rhs._maxTickets > rhs._seatC || rhs._freeTickets > rhs._maxTickets || rhs._freeTickets > rhs._seatC) {
		throw 2;
	}
	strcpy(_engineType, rhs._engineType);
}

Bus::~Bus()
{
}

Bus& Bus::operator=(const Bus& rhs)
{
	if (this != &rhs) {
		Vehicle::operator=(rhs);

		_seatC = rhs._seatC;
		_maxTickets = rhs._maxTickets;
		_freeTickets = rhs._freeTickets;

		strcpy(_engineType, rhs._engineType);
	}

	return *this;
}

void Bus::sellTickets(unsigned price, unsigned count)
{
	if (count <= _freeTickets) {
		_freeTickets -= count;
	}
	else {
		throw 1;
	}
}

std::ostream& Bus::ins(std::ostream& out) const
{
	Vehicle::ins(out);
	out << " " <<_seatC << " " << _maxTickets << " " << _freeTickets << " " << _engineType;

	return out;
}

std::istream& Bus::ext(std::istream& in)
{
	Vehicle::ext(in);
	in >> _seatC >> _maxTickets >> _freeTickets >> _engineType;

	in.ignore();

	return in;
}
