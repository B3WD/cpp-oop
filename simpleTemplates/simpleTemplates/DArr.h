#pragma once

#include <iostream>

template<typename T>
class DArr {
private:
	T* _data;
	int _sz, _lastP;

	void fill(T* dest, T* sourceData, int sz);
public:
	DArr(int sz=2);
	DArr(T* data, int sz);
	~DArr();

	T& operator[](unsigned i) const;

	T* beg() const;
	T* end() const;

	void push_back(const T& elem);
	void pop_back();

	std::ostream& ins(std::ostream& out) const;
};


template<typename T>
inline DArr<T>::DArr(int sz) : _data(new T[sz]), _sz(sz), _lastP(0) {  }

template<typename T>
inline DArr<T>::DArr(T* data, int sz) : _data(new T[sz]), _sz(sz), _lastP(sz)
{
	fill(_data, data, sz);
}

template<typename T>
inline DArr<T>::~DArr()
{
	delete[] _data;
}

template<typename T>
inline T& DArr<T>::operator[](unsigned i) const
{
	try {
		if (i < _lastP) {
			return _data[i];
		}
		else {
			throw 1;
		}
	}catch(int errN){
		if (errN == 1) {
			std::cerr << "Out of bounds!\n";
			throw;
		}
	}
	
}

template<typename T>
inline T* DArr<T>::beg() const
{
	return _data;
}

template<typename T>
inline T* DArr<T>::end() const
{
	return _data + _lastP;
}

template<typename T>
inline void DArr<T>::push_back(const T& elem)
{
	if(_lastP == _sz) {
		T* newArr = new T[_sz * 2];

		for (int i = 0; i < _lastP; i++) {
			newArr[i] = _data[i];
		}

		delete[] _data;
		_data = newArr;

		_sz *= 2;
	}
	
	_data[_lastP] = elem;
	_lastP++;
}

template<typename T>
inline void DArr<T>::pop_back()
{
	_lastP--;
}

template<typename T>
inline void DArr<T>::fill(T* dest, T* sourceData, int sz)
{
	for (int i = 0; i < sz) {
		dest[i] = sourceData[i];
	}
}

template<typename T>
inline std::ostream& DArr<T>::ins(std::ostream& out) const
{
	for (int i = 0; i < _lastP; i++) {
		out << _data[i] << " ";
	}

	return out;
}

template<typename T>
std::ostream& operator<<(std::ostream& out, const DArr<T>& rhs) {
	return rhs.ins(out);
}