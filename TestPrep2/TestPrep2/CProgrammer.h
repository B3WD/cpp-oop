#pragma once

#include "CEmployee.h"
#include "PTask.h"

class CProgrammer : public CEmployee {
private:
	unsigned _projC,
		     _finishedC;
	double _bonus;
	PTask* _tasks;

public:
	CProgrammer(const char* name = "null",
		double salary = 0,
		unsigned employmentYear = 0,
		unsigned projC = 0,
		unsigned finishedC = 0,
		double bonus = 0,
		PTask* tasks = nullptr);

	CProgrammer(const CProgrammer& rhs);
	virtual ~CProgrammer();

	CProgrammer& operator=(const CProgrammer& rhs);

	void regTask(const char* name, double price, double commision);

	double getBonus() { return _bonus; };

	virtual std::ostream& ins(std::ostream& out) const;
	virtual std::istream& ext(std::istream& in);

};