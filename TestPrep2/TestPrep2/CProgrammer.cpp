#include "CProgrammer.h"

CProgrammer::CProgrammer(const char* name,
	double salary,
	unsigned employmentYear,
	unsigned projC,
	unsigned finishedC,
	double bonus,
	PTask* tasks)

	: CEmployee(name, salary, employmentYear),
	_projC(projC),
	_finishedC(finishedC),
	_bonus(bonus),
	_tasks(new PTask[_projC])
{
	for (int i = 0; i < _projC; i++) {
		_tasks[i] = tasks[i];
	}
}

CProgrammer::CProgrammer(const CProgrammer& rhs)
	: CEmployee(rhs),
	_projC(rhs._projC),
	_finishedC(rhs._finishedC),
	_bonus(rhs._bonus),
	_tasks(new PTask[_projC])
{
	for (int i = 0; i < _projC; i++) {
		_tasks[i] = rhs._tasks[i];
	}
}

CProgrammer::~CProgrammer()
{
	delete[] _tasks;
}

CProgrammer& CProgrammer::operator=(const CProgrammer& rhs)
{
	if (this != &rhs) {
		CEmployee::operator=(rhs);
		_projC = rhs._projC;
		_finishedC = rhs._finishedC;
		_bonus = rhs._bonus;

		delete[] _tasks;
		_tasks = new PTask[rhs._projC];

		for (int i = 0; i < _projC; i++) {
			_tasks[i] = rhs._tasks[i];
		}

	}

	return *this;
}

void CProgrammer::regTask(const char* name, double price, double commision)
{
	PTask* newTasks = new PTask[_projC + 1];

	for (int i = 0; i < _projC; i++) {
		newTasks[i] = _tasks[i];
	}
	_projC++;
	newTasks[_projC] = PTask(name, price);
	delete _tasks;
	_tasks = newTasks;

	_bonus += price * commision;
}

std::ostream& CProgrammer::ins(std::ostream& out) const
{
	CEmployee::ins(out);
	out << " " << _projC << " " << _finishedC << " " << _bonus;

	for (int i = 0; i < _projC; i++) {
		out << " " << _tasks[i];
	}

	return out;
}

std::istream& CProgrammer::ext(std::istream& in)
{
	CEmployee::ext(in);
	in >> _projC >> _finishedC >> _bonus;
	in.ignore();

	delete _tasks;
	_tasks = new PTask[_projC];  // veeeeery important.

	for (int i = 0; i < _projC; i++) {
		in >> _tasks[i];
	}

	return in;
}
