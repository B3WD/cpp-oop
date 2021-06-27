#pragma once

template<typename T>
class Set {
private:
	T* _data;
	int _sz;

public:
	Set();
	Set(T* data, int sz);
	~Set();

	Set<T>& operator=(const T& rhs);

	T* getData() const { return _data; };
	int getSize() const { return _sz; };

	void newData(T* data, int sz);
	void add(const T& elem);
	void print() const;
};

template<typename T>
inline Set<T>::Set()
{
	_data = new T[1];
	_sz = 0;
}

template<typename T>
inline Set<T>::Set(T* data, int sz) : _data(new T[sz]), _sz(sz)
{
	newData(data, sz);
}

template<typename T>
inline Set<T>::~Set()
{
	delete[] _data;
}

template<typename T>
inline Set<T>& Set<T>::operator=(const T& rhs)
{
	newData(rhs.getData(), rhs.getSize());
}

template<typename T>
inline void Set<T>::newData(T* data, int sz)
{
	if (sz > _sz || sz <= _sz / 2) {
		delete[] _data;
		_data = new T[sz];
	}

	_sz = sz;

	for (int i = 0; i < _sz; i++) {
		_data[i] = data[i];
	}
}

template<typename T>
inline void Set<T>::add(const T& elem)
{
	bool isFound = checkPresent<T>(_data, elem, _sz);

	if (!isFound) {
		T* newData = new T[_sz + 1];

		for (int i = 0; i < _sz; i++) {
			newData[i] = _data[i];
		}
		delete[] _data;

		newData[_sz] = elem;
		_sz++;

		_data = newData;
	}
}

template<typename T>
inline void Set<T>::print() const
{
	for (int i = 0; i < _sz; i++) {
		std::cout << _data[i] << "\t";
	}
}

template<typename T>
bool checkPresent(const T* arrSource, const T& toFind, int sz) {
	for (int i = 0; i < sz; i++) {
		if (arrSource[i] == toFind) {
			return true;
		}
	}
	return false;
}