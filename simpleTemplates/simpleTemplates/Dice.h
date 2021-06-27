#pragma once

#include <iostream>
#include <fstream>

template<typename T, unsigned sz=6>
class Dice {
private:
	T _res;
	int _min;

public:
	Dice(int min = 1);
	T& roll();

	std::ostream& ins(std::ostream& out) const;
	//void toHTML(const char* name); // TO DO

};

template<typename T, unsigned sz>
inline Dice<T, sz>::Dice(int min) : _min(min)
{
	roll();
}

template<typename T, unsigned sz>
inline T& Dice<T, sz>::roll()
{
	//does not work properly for "double".

	srand(time(0));
	_res = (rand() % sz) + _min;

	return _res;
}

template<typename T, unsigned sz>
inline std::ostream& Dice<T, sz>::ins(std::ostream& out) const
{
	out << _res;

	return out;
}

//template<typename T, unsigned sz>
//inline void Dice<T, sz>::toHTML(const char* name)
//{
//	std::ofstream ofs("dice.html");
//
//	//TO DO
//}

template<typename T, unsigned sz>
std::ostream& operator<<(std::ostream& out, const Dice<T, sz>& rhs) {
	return rhs.ins(out);
}