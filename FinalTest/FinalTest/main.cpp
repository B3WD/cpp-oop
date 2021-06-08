#include <fstream>

#include "Vehicle.h"
#include "TVehicle.h"
#include "Bus.h"

void t1() {
	Vehicle c1("Alpha Romeo", "ST 3030 ZS", 2020, 10000);
	Vehicle c2;
	Vehicle c3 = c1;
	Vehicle* eArr = new Vehicle[10];

	std::cin >> c2;
	c3 = c2;

	std::cout << c1 << "\n" << c2 << "\n" << c3;

	for (int i = 0; i < 10; i++) {
		std::cout << "\n" << eArr[i];
	}
}

void t2() {
	Bus b1("Alpha Romeo", "ST 3030 ZS", 2020, 10000, 5, 4, 4, "Petrol");
	Bus b2 = b1;

	try {
		b1.sellTickets(100, 3);
		std::cout << b1 << "\n";

		b1.sellTickets(20, 1);
		std::cout << b1 << "\n";

		b1.sellTickets(10, 1);
		std::cout << b1 << "\n";
	}
	catch (int) {
		std::cerr << "The bus does not have enough tickets";
	}
}

void t3() {
	const int sz = 5;
	Vehicle** poly_cont = new Vehicle * [sz];
	int maxInd = 0;

	std::ofstream ofsV("Vehicle.bin", std::ios::binary | std::ios::out);
	std::ofstream ofsB("Bus.bin", std::ios::binary | std::ios::out);

	for (int i = 0; i < sz; i++) {
		if (i & 1) {
			poly_cont[i] = new Vehicle("Veh", "vehnum", 2010, 2000 + i);
		}
		else {
			poly_cont[i] = new Bus("Bus", "busnum", 200, 2010 + i, i + 1, i + 1, i + 1, "Petrol");
		}

		std::cout << *poly_cont[i] << "\n";

		if (typeid(*poly_cont[i]) == typeid(Vehicle)) {
			ofsV.write((char*)poly_cont[i], sizeof(Vehicle));
		}
		else if(typeid(*poly_cont[i]) == typeid(Bus)){
			ofsB.write((char*)dynamic_cast<Bus*>(poly_cont[i]), sizeof(Bus));
		}
	}
	ofsV.close();
	ofsB.close();

	std::ifstream ifsB("Vehicle.bin", std::ios::binary | std::ios::in);

	Bus b;
	ifsB.read((char*)&b, sizeof(Bus));
	b.sellTickets(100, 2);

	std::cout << "Bus ex.:\n" << b;
}

void t4() {
	TVehicle<double> c1("Alpha Romeo", "ST 3030 ZS", 2020, 123.123);
	TVehicle<double> c2;
	TVehicle<double> c3 = c1;
	TVehicle<double>* eArr = new TVehicle<double>[10];

	std::cin >> c2;
	c3 = c2;

	std::cout << c1 << "\n" << c2 << "\n" << c3;

	for (int i = 0; i < 10; i++) {
		std::cout << "\n" << eArr[i];
	}
}

int main() {

	//t1();
	//t2();
	t3();
	//t4();

	return 0;
}