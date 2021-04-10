#include <iostream>
using namespace std;

double avrg_garmony(double a, double b);

int main() {
	
	cout << "Enter two numblers: ";
	double first, second;

	while(cin >> first >> second) {
	    if(first != 0 && second != 0)
	    	cout << "Result: " << avrg_garmony(first, second) << endl;
	    else
	    	break;
	}

	cout << "Programm is terminated.";
	cin.get();
	cin.get();
}

double avrg_garmony(double a, double b) {

	return 2.0 / ((1.0 / a) + (1.0 / b));
}
