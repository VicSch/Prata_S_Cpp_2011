#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a = 4.0;
	double& al = a;

	double b = 5.0;
	double&& br = b + 5.0;
	double&& fr = sqrt(49.0);

	long c = 10;
	

	// reference defining
	
	// you should initialize a reference variable when you define it
	
	cout << "Reference \'lvalue\'.\n";
	cout << "Var. a = " << a << "; address of a: " << &a << endl;
	cout << "Ref. al = " << al << "; address of al: " << &al << endl;
	cout << endl;
	cout << "Reference \'rvalue\'.\n";
	cout << "Var. b = " << b << "; address of b: " << &b << endl;
	cout << "Ref. br = " << br << "; address of br: " << &br << endl;
	cout << "Ref. fr = " << fr << "; address of fr: " << &fr << endl;

	cin.get();

}
