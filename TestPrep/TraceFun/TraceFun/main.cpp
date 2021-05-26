#include <iostream>
#include "TraceFun.h"

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

int main() {

	someSum();

	return 0;
}