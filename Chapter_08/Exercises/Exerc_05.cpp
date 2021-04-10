#include <iostream>
#include <climits>

using namespace std;

template <typename T>
T max(T* arr);

int main() {

	double arr1[] {-1213.45, 23.456, -23.99, 345.55, 21.6};
	int arr2[] {-500, 4, -34, 2, 56};

	cout << max(arr1) << endl;
	cout << max(arr2) << endl;

	cin.get();
}

template <typename T>
T max(T* arr) {
	T max = T(LLONG_MIN);
	for (int i = 0; i < 5; ++i)
		if(arr[i] > max)
			max = arr[i];
	return max;
}