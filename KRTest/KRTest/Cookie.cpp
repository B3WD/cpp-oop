#include "Cookie.h"

#include <cstring>
#include <iostream>

Cookie::Cookie(double sugarPercent, const char* brashno, bool izpechena)
	: _sugarPercent(sugarPercent), _brashno(new char[strlen(brashno)+1]), _izpechena(izpechena)
{
	strcpy(_brashno, brashno);
}

Cookie::~Cookie()
{
	delete[] _brashno;
}

void Cookie::setSugar(double pcnt)
{
	_sugarPercent = pcnt;
}

void Cookie::setBrashno(const char* tipBrashno)
{
	delete[] _brashno;
	_brashno = new char[strlen(tipBrashno) + 1];
	strcpy(_brashno, tipBrashno);
}

void Cookie::setIzpechena(bool izpech)
{
	_izpechena = izpech;
}

void Cookie::print() const
{
	std::cout << "% zahar ot dneven priem: " 
		<< _sugarPercent << "\nTip prashno: " 
		<< _brashno << "\nIzpechena: " << std::boolalpha << _izpechena;
}
