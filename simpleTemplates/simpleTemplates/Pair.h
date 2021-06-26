#pragma once

template<typename T, typename S>
class Pair {
private:
	T _p1;
	S _p2;

public:
	Pair(const T &p1, const S &p2);
	void print() const;
};

template<typename T, typename S>
inline Pair<T, S>::Pair(const T& p1, const S& p2) : _p1(p1), _p2(p2) {  };

template<typename T, typename S>
inline void Pair<T, S>::print() const
{
	std::cout << _p1 << " " << _p2;
}