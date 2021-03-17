#include <iostream>

int main() {

	int n, l;
	bool found = false;

	std::cin >> n;

	int * arr = new int [n];

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	std::cin >> l;

	for (int i = 0; i < n; i++) {
		if (arr[i] == l) {
			found = true;
			std::cout << "YES " << i << std::endl;
			break;
		}
	}

	if (!found) {
		std::cout << "NO :(" << std::endl;
	}

	if (arr != nullptr) {
		delete[] arr;
		arr = nullptr;
	}
}