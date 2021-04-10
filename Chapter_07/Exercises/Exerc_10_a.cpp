#include <iostream>
using namespace std;

double sum(double a, double b);
double dif(double a, double b);
double mul(double a, double b);
double div(double a, double b);

double calculate(double a, double b, double (*fun)(double, double));

int main() {
	double first, second;
	cout << "Enter two numbers (0 and 0 to quit): ";
	while(cin >> first >> second) {
		if(first == 0 && second == 0)
			break;
		cout << "Summa = " << calculate(first, second, sum) << endl;
		cout << "Difference = " << calculate(first, second, dif) << endl;
		cout << "Multipay = " << calculate(first, second, mul) << endl;
		cout << "Division = " << calculate(first, second, div) << endl;
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