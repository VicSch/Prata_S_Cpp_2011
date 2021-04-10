#include <iostream>

using namespace std;

int main()
{
	// array declare type int of 10 components
	int myArray[10];
	// assign value to first three elements of array
	myArray[0] = 22;
	myArray[1] = 36;
	myArray[2] = 50;
	cout << myArray[2] << endl;
	cout << "Name of array to coun gives addres of array: ";
	cout << myArray << endl;
	cin.get();

	// declaretion with assighments
	int myArray0[3] = {10, 20, 30};

	// compiler count elements of array for you (4)
	float myArray1[] = {1.0, 1.5, 2.0, 2.5};

	// compiler initialize the remaining elements to zero
	int massive0[1000] = {0};
	int massive1[1000] = {};

	// another type of declare array
	int myArray2[2] {10, 40};
	int myArray3[1000] {};

	// you can't assighn one array to another
	// myArray = myArray0;		// not allowed

	return 0;
}