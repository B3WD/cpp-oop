#include <iostream>

#include "simpleTemplates.h"
#include "Pair.h"
#include "Matrix.h"
#include "Set.h"
#include "Dice.h"
#include "DArr.h"
#include "Container.h"

void print(int i) { std::cout << i << "\n"; }

void t1() {
	std::cout << "===== Simple template funcs =====\n";
	const int sz = 5;
	int arr1[] = { 1, 2, 3, 4, 5 };
	double arr2[] = { 2.3, 3.4, 4.5, 5.6, 6.7 };

	std::cout << arrSum(arr1, sz) << std::endl;
	std::cout << arrSum(arr2, sz) << std::endl;

	std::cout << arrAvg<double, int>(arr1, sz) << std::endl;
	std::cout << arrAvg<double, double>(arr2, sz) << std::endl;
}

void t2() {
	std::cout << "===== Pair =====\n";
	Pair<double, int> pair1(2.3, 5);
	pair1.print();
	std::cout << "\n";
}

void t3() {
	std::cout << "===== Matrix =====\n";
	Matrix<double, 3, 5> m1;

	std::cout << "\n";
	m1.print();
}

void t4() {
	std::cout << "===== Set =====\n";

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
	std::cout << "\n";

}

void t5() {
	std::cout << "===== Dice =====\n";
	Dice<char, 6> d1(65);
	Dice<int, 6> d2;

	d1.roll();
	d2.roll();
	std::cout << d1 << "\n";
	std::cout << d2 << "\n";

}

void t6() {
	std::cout << "===== DArr =====\n";
	DArr<Dice<int>> c1;

	Dice<int, 6> d1;
	Dice<int, 6> d2(10);
	Dice<int, 6> d3(20);

	std::cout << d1 << "\n";
	std::cout << d2 << "\n";
	std::cout << d3 << "\n";

	c1.push_back(d1);
	c1.push_back(d2);
	c1.push_back(d3);

	std::cout << c1 << "\n";

	c1.pop_back();

	std::cout << c1 << "\n";
	std::cout << c1[0] << "\n";
	//std::cout << c1[2] << "\n";
}

void t7() {
	std::cout << "===== Container =====\n";

	Container<int, DArr> c1;
	c1.append(1); c1.append(2); c1.append(3); c1.append(4); c1.append(5);

	c1.foreach(print);
}

int main()
{
	t1();
	t2();
	t3();
	t4();
	t5();
	t6();
	t7();

	return 0;
}