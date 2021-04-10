#include <iostream>

// using namespace std;

// prototype of function where argument is two-demensional array

// first variant
int arr_sum(int (*cookies)[4], int num);

int main() {
	
	const int a = 3;
	const int b = 4;
	int arr[a][b] {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	int res = 0;
	res += arr_sum(arr, a);

	if(res)
		std::cout << "OK. Result is: " << res << std::endl;

	std::cin.get();
}

int arr_sum(int (*cookies)[4], int num) {
	int sum = 0;
	for (int i = 0; i < num; ++i) {
		for (int j = 0; j < 4; ++j) {
			sum += cookies[i][j];
		}
	}

	return sum;
}

/* Dereference pointers of two-demensial array
arr[a][b] == *(*(arr + a) + b);

s.338 (engl. book), s.333 (rus. book)
/*