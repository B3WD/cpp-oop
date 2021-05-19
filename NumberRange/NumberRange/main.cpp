#include <iostream>
#include "NumberInt.h"
#include "NumberIntK.h"

void t1() {
	NumberInt n1;

	std::cin >> n1;
	std::cout << n1 << std::endl;
	std::cout << n1() << std::endl;
	std::cout << n1(2, 9) << std::endl;
	std::cout << n1(3, 12) << std::endl;
}

int main() {

	NumberInt n2(33, 57);

	NumberIntK nk(5, n2);

	std::cout << nk << std::endl;
	std::cout << nk[2] << " Sum = " << nk(2) << std::endl;

	return 0;
}