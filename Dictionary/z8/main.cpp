#include <iostream>
#include "WordPair.h"

int main() {

	char w1[20], w2[20];

	std::cin >> w1 >> w2;

	WordPair greeting(w1, w2);

	std::cout << greeting.getW1() << std::endl;
	std::cout << greeting.getW2() << std::endl;

	return 0;
}