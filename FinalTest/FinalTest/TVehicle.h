#pragma once
#include <iostream>

template<typename T>
class TVehicle {
private:
	char _model[21];
	char _num[9];
	unsigned _year;
	T _km;

public:
	TVehicle(const char* model = "null", const char* num = "null", T year = 0, unsigned km = 0);
	TVehicle(const TVehicle<T>& rhs);
	virtual ~TVehicle();

	TVehicle<T>& operator=(const TVehicle<T>& rhs);

	virtual std::ostream& ins(std::ostream& out) const;
	virtual std::istream& ext(std::istream& in);
};

template<typename T>
std::ostream& operator<<(std::ostream& out, const TVehicle<T>& rhs);

template<typename T>
std::istream& operator>>(std::istream& in, TVehicle<T>& rhs);

//////////////

template<typename T>
TVehicle<T>::TVehicle(const char* model, const char* num, T year, unsigned km)
	: _year(year), _km(km)
{
	strcpy(_model, model);
	strcpy(_num, num);
}

template<typename T>
TVehicle<T>::TVehicle(const TVehicle<T>& rhs)
	: _year(rhs._year), _km(rhs._km)
{
	strcpy(_model, rhs._model);
	strcpy(_num, rhs._num);
}

template<typename T>
TVehicle<T>::~TVehicle() {  }

template<typename T>
TVehicle<T>& TVehicle<T>::operator=(const TVehicle<T>& rhs)
{
	if (this != &rhs) {
		_year = rhs._year;
		_km = rhs._km;
		strcpy(_model, rhs._model);
		strcpy(_num, rhs._num);
	}

	return *this;
}

template<typename T>
std::ostream& TVehicle<T>::ins(std::ostream& out) const
{
	out << _model << " " << _num << " " << _year << " " << _km;
	return out;
}

template<typename T>
std::istream& TVehicle<T>::ext(std::istream& in)
{
	in.getline(_model, 21);
	in >> _num >> _year >> _km;
	in.ignore();

	return in;
}

template<typename T>
std::ostream& operator<<(std::ostream& out, const TVehicle<T>& rhs)
{
	return rhs.ins(out);
}

template<typename T>
std::istream& operator>>(std::istream& in, TVehicle<T>& rhs)
{
	return rhs.ext(in);
}