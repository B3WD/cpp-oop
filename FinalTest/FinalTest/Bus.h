#pragma once

#include "Vehicle.h"

class Bus : public Vehicle {
private:
	unsigned _seatC, 
		     _maxTickets, 
		     _freeTickets;

	char _engineType[21];

public:
	Bus(const char* model = "null",
		const char* num = "null",
		unsigned year = 0,
		unsigned km = 0,
		unsigned seatC = 0,
		unsigned maxTickets = 0,
		unsigned freeTickets = 0,
		const char* engine = "null");

	Bus(const Bus& rhs);
	virtual ~Bus();

	Bus& operator=(const Bus& rhs);

	void sellTickets(unsigned price, unsigned count);

	virtual std::ostream& ins(std::ostream& out) const;
	virtual std::istream& ext(std::istream& in);
};