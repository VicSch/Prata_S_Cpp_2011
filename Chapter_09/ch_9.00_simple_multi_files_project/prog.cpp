#include <iostream>
#include "header.h"

using namespace std;

// const int SIZE = 5;		// constant size of array
// int sum(int*, int);		// prototype of function

int main() {

	int arr[SIZE] {1, 2, 3, 4, 5};
	int s = sum(arr, SIZE);
	cout << "Result: " << s << endl;
	cin.get();

	return 0;
}

// int sum(int* arr, int n) {
// 	int s = 0;
// 	for(int i = 0; i < n; ++i)
// 		s += arr[i];
// 	return s;
// }