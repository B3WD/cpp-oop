#include <iostream>
#include "Cookie.h"

void Dice(int sideCount, int tries, int arr[]) {
	int rnd;
	srand(time(0));

	if (sideCount > 0) {
		for (int i = 0; i < tries; i++) {
			std::cout << "Try number " << i + 1 << ": ";
			rnd = rand() % sideCount + 1;
			arr[i] = rnd;
			std::cout << rnd << "\n";
		}
	}
	else {
		std::cout << "Dice with 0 or less sides is not possible!\n";
	}
}

void t1() {
	int n, m;

	std::cout << "Enter number of sides: ";
	std::cin >> n;

	std::cout << "Enter number of tries: ";
	std::cin >> m;

	int* arrDice = new int[m];

	Dice(n, m, arrDice);

	delete[] arrDice;
}

void t2() {
	Cookie c1(22.2, "Rujeno", true);

	c1.setBrashno("Bqlo");
	c1.setSugar(19.9);

	c1.print();
}

int main() {
	
	t1();

	std::cout << "\n====================\n\n";

	t2();

	return 0;
}