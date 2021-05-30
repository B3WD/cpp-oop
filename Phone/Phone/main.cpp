#include <iostream>
#include "Phone.h"
#include "MobilePhone.h"
#include "SmartPhone.h"


void t1() {
	Phone p1("08726348", "Nokia", 100.2, 1337);
	MobilePhone m1("77777", "Sony", 123.12, 123, "Telecom", 12);
	SmartPhone s1("12345543", "Samsung", 8858, 44, "ComeTeli", 33, "OxygenOS", 5);

	std::cout << p1 << std::endl;
	std::cout << m1 << std::endl;
	std::cout << s1 << std::endl;

	std::cout << (m1 > p1) << std::endl;
}

void t2() {

	const int sz = 100;
	Phone* *phoneArr = new Phone*[sz];

	for (int i = 0; i < sz; i++) {
		if (i % 2 == 0) {
			phoneArr[i] = new Phone("Basic", "0", i);
		}
		else if (i % 3 == 0) {
			phoneArr[i] = new MobilePhone("Average", "0", i);
		}
		else {
			phoneArr[i] = new SmartPhone("Advanced", "0", i);
		}
		
	}

	std::cout << *phoneArr[69] << "\n";
	std::cout << *phoneArr[70] << "\n";
	std::cout << *phoneArr[71];

	delete[] phoneArr;
}

int main() {

	//t1();
	t2();

	return 0;
}