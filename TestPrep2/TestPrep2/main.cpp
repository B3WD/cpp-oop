#include <iostream>
#include <fstream>

#include "CEmployee.h"
#include "CProgrammer.h"
#include "PTask.h"

void t1() {
	CEmployee c1("John Brown", 1234.56, 2014);
	CEmployee c2;
	CEmployee c3 = c1;
	CEmployee* eArr = new CEmployee[10];

	std::cin >> c2;
	c3 = c2;

	std::cout << c1 << "\n" << c2 << "\n" << c3;

	for (int i = 0; i < 10; i++) {
		std::cout << "\n" << eArr[i];
	}
}

void t2() {
	PTask p1tasks[2] = { PTask("DB", 1000), PTask("Game", 800) };
	CProgrammer p1("J J", 12.2, 2020, 2, 3, 0, p1tasks);
	CProgrammer p2;

	std::cin >> p2;

	std::cout << p1 << "\n" << p2;
}

int t3() {
	const int sz = 5;
	CEmployee** poly_cont = new CEmployee * [sz];
	PTask p1tasks[2] = { PTask("DB", 1000), PTask("Game", 800) };
	int maxInd = 0;

	for (int i = 0; i < sz; i++) {
		if (i & 1) {
			poly_cont[i] = new CEmployee("Employee", 1000 * i);
		}
		else {
			poly_cont[i] = new CProgrammer("Programmer", 1000 * i, i, 1, 0, 0, p1tasks);
		}

		if (typeid(*poly_cont[i]) == typeid(CProgrammer)) {
			if (dynamic_cast<CProgrammer*>(poly_cont[maxInd])->getBonus()
				<
				dynamic_cast<CProgrammer*>(poly_cont[i])->getBonus()) {
				maxInd = i;
			}
		}

	}

	std::ofstream ofs("BestProgrammer.bin", std::ios::binary | std::ios::out);
	if (!ofs) {
		std::cerr << "File could not be created!\n";
		return 1;
	}

	ofs.write((char*)poly_cont[maxInd], sizeof(CProgrammer));

	std::ifstream ifs("BestProgrammer.bin", std::ios::binary | std::ios::in);
	if (!ifs) {
		std::cerr << "File could not be openned!\n";
		return 2;
	}

	CProgrammer p;
	ifs.read((char*)&p, sizeof(CProgrammer));

	std::cout << p;
}

int main() {

	//t1();
	//t2();
	t3();

	return 0;
}