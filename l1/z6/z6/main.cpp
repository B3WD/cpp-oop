#include "Product.h"
#include <iostream>

int main() {

	Date currentDate = Date(26, 3, 2021);
	char prName[] = "Banica";
	char prProiz[] = "Stz";

	/*Product emptyProd;
	emptyProd.printData();*/

	Product prod(prName, prProiz, 1.35, 2, 3, 4, Date(25, 3, 2021));

	prod.printData();

	prod.setD(120);
	prod.setPrice(2.99);

	std::cout << std::endl << "======= After changes =======" << std::endl;
	prod.printData();

	if (prod.isExpired(currentDate)) {
		std::cout << "Product is expired!\n";
	}
	else {
		std::cout << "Product is fine!\n";
	}

	return 0;
}