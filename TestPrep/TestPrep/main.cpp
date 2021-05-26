#include <iostream>
#include "TraceFun.h"
#include "CountVar.h"
#include "RangeVar.h"

int someSum() {
	TraceFun t("SomeFun", std::cout);
	int sum = 0;

	for (int i = 0; i < 1000; i++) {
		if (i % 5 == 0 || i % 7 == 0) {
			sum += i;
		}
	}
	std::cout << "sum = " << sum << "\n";

	return sum;
}

void t1() {
	CountVar k1(7, "k1", std::cout);

	for (int i = 0; i < 5; i++) {
		k1 = k1 + i;
	}
	k1 = 100000;
}

void t2() {
	RangeVar r1(5, "r1", std::cout);

	for (int i = 3; i < 9; i++) {
		r1 = i;
	}
}

int main() {

	//someSum();
	//t1();
	//t2();

	return 0;
}