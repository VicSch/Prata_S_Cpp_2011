#include <iostream>
using namespace std;

template <typename T>		// old definition <class T>
void swap_T(T&, T&);

int main() {

	/* To let the compiler know that you need a particular form of swap_T function, you just
	use a function called swap_T() in your program.The compiler checks the argument types
	you use in this function and then generates the corresponding function. */

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

	cin.get();


	return 0;
}

template <typename T>		// old definition <class T>
void swap_T(T& a, T& b) {

	t = a;					// variable t type T
	a = b;
	b = t;
}