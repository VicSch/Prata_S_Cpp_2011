#include <iostream>
using namespace std;

template <typename T>		// old definition <class T>
void swap_T(T&, T&);

template <typename T>
void swap_T(T* a, T* b, int n);
void show(int a[]);

const int SIZE = 10;

int main() {

	int a = 4;
	int b = 40;
	cout << "Initial value of int a - " << a << endl;
	cout << "Initial value of int b - " << b << endl;
	cout << endl;

	swap_T(a, b);

	cout << "Value of int a after function swap_T()- " << a << endl;
	cout << "Value of int b after function swap_T()- " << b << endl;

	float c = 3.25;
	float d = 5.27;
	cout << "Initial value of int c - " << c << endl;
	cout << "Initial value of int d - " << d << endl;
	cout << endl;

	swap_T(c, d);

	cout << "Value of int c after function swap_T()- " << c << endl;
	cout << "Value of int d after function swap_T()- " << d << endl;
	cout << endl;

	int a1[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int a2[SIZE] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	cout << "Array a1 before function swap_T()\n";
	show(a1);
	cout << "Array a2 before function swap_T()\n";
	show(a2);

	cout << endl;
	cout << "Array a1 after function swap_T()\n";
	show(a1);
	cout << "Array a2 after function swap_T()\n";
	show(a2);

	cin.get();


	return 0;
}
// swap integer
template <typename T>		// old definition <class T>
void swap_T(T& a, T& b) {

	T t = a;				// variable t type T
	a = b;
	b = t;
}
// swap integer arrays
template <typename T>
void swap_T(T* a, T* b, int n) {

	T temp[n];
	for (int i = 0; i < n; ++i) {
		temp[i] = a[i];
		a[i] = b[i];
		b[i] = temp[i];
	}
}

void show(int a[]) {

	for (int i = 0; i < SIZE; ++i)
		cout << a[i];
	cout << endl;
}