#pragma once

template<typename T, int R, int C>
class Matrix {
private:
	T _data[R][C];
public:
	Matrix();
	// Matrix(int r = 0, int c = 0);

	void print() const;
};

template<typename T, int R, int C>
inline Matrix<T, R, C>::Matrix()
{
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			_data[i][j] = T(0);
		}
	}
};

//template<typename T, int R, int C>
//inline Matrix<T, R, C>::Matrix(int r, int c) : R(r), C(c)
//{
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			_data[i][j] = T(0);
//		}
//	}
//};

template<typename T, int R, int C>
inline void Matrix<T, R, C>::print() const
{
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			std::cout << _data[i][j] << "\t";
		}
		std::cout << "\n";
	}
}