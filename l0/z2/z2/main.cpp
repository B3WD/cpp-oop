#include <iostream>

int main() {

	int n, sum = 0;

	std::cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if(i % 2 == 0){
			sum += arr[i];
		}
	}

	std::cout << sum;

	return 0;
}