#include <iostream>

#include "simpleTemplates.h"
#include "Pair.h"
#include "Matrix.h"
#include "Set.h"

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

int main()
{
	t1();
	t2();
	t3();
	t4();

	return 0;
}