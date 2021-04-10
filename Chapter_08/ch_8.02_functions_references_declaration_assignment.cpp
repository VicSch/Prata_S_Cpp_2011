#include <iostream>

using namespace std;

// function prototype with arguments as references
double sqr1(double& num);
double sqr2(const double& num);

int main() {
	double a = 4.0;
	double b = 5.0;
	long c = 10;
	

	// reference defining
	
	// you should initialize a reference variable when you define it
	
	cout << "Initial value and adress of variable a.\n";
	cout << "Var. a = " << a << "; address of a: " << &a << endl;
	cout << endl;
	cout << "After call function with constant reference argument.\n";
	cout << "Result = " << sqr2(a) << ";\n";
	// a variable still the same
	cout << "Var. a = " << a << "; address of a: " << &a << endl;
	cout << endl;
	cout << "After call function with reference argument.\n";
	cout << "Result = " << sqr1(a) << ";\n";
	// a variable has been changed
	cout << "Var. a = " << a << "; address of a: " << &a << endl;
	cout << "!!!!!! Variable a value has been changed !!!!!!.\n";

	// this part of code rize error because of expression as reference variable argument
	// cout << endl;
	// cout << "Call function with expression as argument.\n";
	// cout << "Result = " << sqr1(a + 1) << ";\n";
	// // a variable has been changed
	// cout << "Var. a = " << a << "; address of a: " << &a << endl;

	// in these cases campilator generate temporary variable
	// while calculate in function sqr2()
	cout << "Result = " << sqr2(6) << ";\n";		// argument is literal constrant
	cout << "Result = " << sqr2(b+2) << ";\n";		// argument is expression
	cout << "Result = " << sqr2(c) << ";\n";		// argument is wrong type


	cin.get();

}

// function definiton with arguments as references 
double sqr1(double& num) {
	num *= num;
	return num;
}

// function definiton with arguments as references 
double sqr2(const double& num) {
	// double res = num * num;
	return num * num;
}