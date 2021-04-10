#include <iostream>
using namespace std;

template <class T>
T sumArray(T* arr, int n);		// template #1

template <class T>
T sumArray(T* arr[], int n);	// template #2

struct debts {char name[20]; double amount;};

int main() {

	int things[6] = {21, 15, 34, 9, 155, 6};
	cout << sumArray(things, 6) << endl;		// template #1
	cout << endl;

	debts mr[3] {
		{"Uma", 2400.5},
		{"Shaned", 3200.8},
		{"Ann", 1200.2}
	};

	double* ptd[3];
	for (int i = 0; i < 3; ++i)
		ptd[i] = &mr[i].amount;

	cout << sumArray(ptd, 3) << endl;			// template #2

	cin.get();
}

template <class T>
T sumArray(T* arr, int n) {
	
	T sum = 0;
	for (int i = 0; i < n; ++i)
		sum += arr[i];
	return sum;
}

template <class T>
T sumArray(T* arr[], int n) {

	T sum = 0;
	for (int i = 0; i < n; ++i)
		sum += *arr[i];
	return sum;
}