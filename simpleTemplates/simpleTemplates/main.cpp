#include <iostream>

#include "simpleTemplates.h"
#include "Pair.h"
#include "Matrix.h"
#include "Set.h"
#include "Dice.h"

void t1() {
	const int sz = 5;
	int arr1[] = { 1, 2, 3, 4, 5 };
	double arr2[] = { 2.3, 3.4, 4.5, 5.6, 6.7 };

	std::cout << arrSum(arr1, sz) << std::endl;
	std::cout << arrSum(arr2, sz) << std::endl;

	std::cout << arrAvg<double, int>(arr1, sz) << std::endl;
	std::cout << arrAvg<double, double>(arr2, sz) << std::endl;
}

void t2() {
	Pair<double, int> pair1(2.3, 5);
	pair1.print();
}

void t3() {
	Matrix<double, 3, 5> m1;

	std::cout << "\n";
	m1.print();
}

void t4() {

	double arr[] = {1.1, 2.2, 3.3};
	double arr2[] = { 7.7, 8.8 };

	Set<double> s1(arr, 3);
	std::cout << "\n";
	s1.print();

	s1.add(4.4);
	s1.add(5.5);
	s1.add(4.4);
	std::cout << "\n";
	s1.print();

	s1.newData(arr2, 2);
	std::cout << "\n";
	s1.print();

}

void t5() {
	Dice<char, 6> d1(65);
	Dice<int, 6> d2;

	d1.roll();
	d2.roll();
	std::cout << "\n" << d1;
	std::cout << "\n" << d2;

}

int main()
{
	t1();
	t2();
	t3();
	t4();
	t5();

	return 0;
}