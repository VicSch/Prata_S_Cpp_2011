#include <iostream>
using namespace std;

double sum(double a, double b);
double dif(double a, double b);
double mul(double a, double b);
double div(double a, double b);

double calculate(double a, double b, double (*fun)(double, double));

int main() {
	// pointer on array of 4 pointers on functions
	double (*ptr[4])(double, double) = {sum, dif, mul, div};

	double first, second;
	cout << "Enter two numbers (0 and 0 to quit): ";
	while(cin >> first >> second) {
		if(first == 0 && second == 0)
			break;
		int i;
		cout << "0. Summa.\n1. Difference.\n2. Multipay.\n3. Division.\n";
		cout << "Enter number of operation: ";
		cin >> i;

		switch(i) {				// *(ptr+i) - dereference pointer on array's component #i
			case 0: cout << "Summa = " << calculate(first, second, *(ptr+i)) << endl;
				break;
			case 1: cout << "Difference = " << calculate(first, second, *(ptr+i)) << endl;
				break;
			case 2: cout << "Multiplay = " << calculate(first, second, *(ptr+i)) << endl;
				break;
			case 3: cout << "Division = " << calculate(first, second, *(ptr+i)) << endl;
				break;
			default: {
				cout << "Enter number 0 - 3:\n";
				break;
			}
		}

		cout << "Enter next two numbers: ";
	}

	cout << "Proglamm terminated.";

	cin.get();
	cin.get();
}

double sum(double a, double b) {
	return a + b;
}

double dif(double a, double b) {
	return a - b;
}

double mul(double a, double b) {
	return a * b;
}

double div(double a, double b) {
	return a / b;
}

double calculate(double a, double b, double (*fun)(double, double)) {
	return (*fun)(a, b);
}