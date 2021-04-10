#include <iostream>
using namespace std;

int main() {
	cout << "Programm calculate summ of min number ";
	cout << "to max number." << endl;
	int min, max;
	cout << "Enter min value: ";
	cin >> min;
	cout << "Enter max value: ";
	cin >> max;
	int sum = 0;
	int m = min;

	while(min <= max) {
	    
	    sum += min;
	    min++;
	}

	cout << "Summ of all numbers from " << m << " to ";
	cout << max << " equal " << sum;
	cin.get();
	cin.get();

}
