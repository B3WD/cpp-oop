#pragma once

#include "DArr.h"

template<typename T, template<typename> class CT>
class Container {
private:
	CT<T> seq;

public:
	void append(const T& elem) { seq.push_back(elem); };
	void foreach(void (*fp)(T));

	T* beg() const { return seq.beg(); };
	T* end() const { return seq.end(); };
};

template<typename T, template<typename> class CT>
inline void Container<T, CT>::foreach(void(*fp)(T))
{
	for (T* p = seq.beg(); p != seq.end(); p++) {
		fp(*p);
	}
}
