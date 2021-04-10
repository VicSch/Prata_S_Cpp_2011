#include <iostream>
using namespace std;

/* To use this feature, you must take at least one of two actions:
Preface the function declaration with the keyword inline .
Preface the function definition with the keyword inline . */
inline double square(double x) {return x * x;};

int main() {

	double a = 30;
	/*  In an inline function, the compiled code is “in line” with the other code in the program.That is,
	the compiler replaces the function call with the corresponding function code */
	cout << square(a);
	cin.get();
	return 0;
}
