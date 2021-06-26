#pragma once

#include <iostream>

template <typename T>
T arrSum(T arr[], int sz) {
	T sum = T(0);
	for (int i = 0; i < sz; i++) {
		sum += arr[i];
	}

	return sum;
}

template <typename out, typename in>
out arrAvg(in arr[], int sz) {
	return arrSum(arr, sz) * 1. / sz;
}
