#include <iostream>
#include "header.h"
// using namespace std;

int sum(int* arr, int n) {
	int s = 0;
	for(int i = 0; i < n; ++i)
		s += arr[i];
	return s;
}
