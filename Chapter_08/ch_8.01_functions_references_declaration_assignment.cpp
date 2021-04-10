#include <iostream>

using namespace std;

// function prototype with arguments as references
double sum(double& num1, double& num2);

int main() {
	double a = 4.0;
	double b = 5.0;
	double c = sum(a, b);

	// reference defining
	double a1 = 3.0;
	double b1 = 8.0;
	// you should initialize a reference variable when you define it
	double& ref_a1 = a1;
	double& ref_b1 = b1;
	double c1 = sum(ref_a1, ref_b1);

	cout << "Var. a = " << a << "; address of a: " << &a << endl;
	cout << "Var. b = " << b << "; address of b: " << &b << endl;
	cout << "Var. c = " << c << "; address of c: " << &c << endl;
	cout << endl;
	cout << "Var. a1 = " << a1 << "; address of a1: " << &a1 << endl;
	cout << "Ref. ref_a1 = " << ref_a1 << "; address of ref_a1: " << &ref_a1 << endl;
	cout << "Var. b1 = " << b1 << "; address of b1: " << &b1 << endl;
	cout << "Ref. ref_b1 = " << ref_b1 << "; address of ref_b1: " << &ref_b1 << endl;
	cout << endl;
	cout << "Assign var. a1 new value 10.0\n";
	cout << "Assign ref. ref_b1 new value 20.0\n";
	cout << endl;
	a1 = 10.0;
	ref_b1 = 20.0;
	cout << "Var. a1 = " << a1 << "; address of a1: " << &a1 << endl;
	cout << "Ref. ref_a1 = " << ref_a1 << "; address of ref_a1: " << &ref_a1 << endl;
	cout << "Var. b1 = " << b1 << "; address of b1: " << &b1 << endl;
	cout << "Ref. ref_b1 = " << ref_b1 << "; address of ref_b1: " << &ref_b1 << endl;
	cout << endl;
	cout << "Assign var a reference. ref_b1 \n";
	// cout << endl;
	a = ref_b1;
	cout << "Var. a = " << a << "; address of a: " << &a << endl;

	cin.get();

}

// function definiton with arguments as references 
double sum(double& num1, double& num2) {
	return num1 + num2;
}