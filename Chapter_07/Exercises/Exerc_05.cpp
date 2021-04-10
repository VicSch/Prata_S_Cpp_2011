#include <iostream>
using namespace std;

long double factorial(int num);

int main() {
	
	cout << "Enter integer number to find factorial: ";
	int n;

	while(cin >> n) {
	    
	    if(n == 0)
	    	break;
	    cout << "Factorial " << n << " = " << factorial(n);
	    cout << "\nEnter next number (0 to quit): ";
	}

	cout << "Programm terminated";


	cin.get();
	cin.get();
}

long double factorial(int num) {

	long double f = 1 * num;

	if(num > 1) {
		f *= factorial(num-1);
	}

	return f;
}