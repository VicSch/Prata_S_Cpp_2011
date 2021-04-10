#include <iostream>
using namespace std;

int main() {
	struct cars
	{
		char model[12];
		int year;
	};

	int count;
	cout << "Enter count of cars: ";
	cin >> count;
	cars collection[count];
	int i = 0;

	while(i < count) {
	    cout << "The car #" << i+1 << endl;
	    cout << "Enter model of the car: ";
	    cin >> collection[i].model;
	    cout << "Enter year of the car: ";
	    cin >> collection[i].year;
	    i++;
	}

	cout << "Here your collection:" << endl;

	for (int i = 0; i < count; ++i)
	{
		cout << i+1 << ". ";
		cout << collection[i].year << " ";
		cout << collection[i].model << endl;
	}

	cin.get();
	cin.get();
}
