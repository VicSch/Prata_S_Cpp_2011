#include <iostream>

// using namespace std;

int arr_sum(int cookies[], int num);

int main() {
	const int ArrSize = 8;
	int arr[] {1, 2, 4, 8, 16, 32, 64, 128};
	std::cout << arr << " = adress, " << sizeof arr << "bites.\n";
	int sum = arr_sum(arr, ArrSize);
	std::cout << "Sum of array is: " << sum << std::endl;

	sum = arr_sum(arr, 3);
	std::cout << "Sum of array is: " << sum << std::endl;

	sum = arr_sum(arr+4, 4);
	std::cout << "Sum of array is: " << sum << std::endl;

	std::cin.get();
}

int arr_sum(int cookies[], int num) {
	int sum = 0;
	for (int i = 0; i < num; ++i)
		sum += cookies[i];
	std::cout << cookies << " = adress, " << sizeof cookies << "bites.\n";
	return sum;
}