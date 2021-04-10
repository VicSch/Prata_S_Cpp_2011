// do not compaile this code
// it for demonstration purpose only
#include <iostream>

int main() {

	// this is a class
	Simple(stirng name, int age, int experience);

	// creates an array of 4 Simple objects
	/*	This declaration requires either that the class
	explicitly define no constructors at all, in which case the implicit do-nothing default con-
	structor is used, or that an explicit default constructor be defined. */
	Simple arrSimple[4];

	//You can use a constructor to initialize the array elements. In that case,
	// you have to call the constructor for each individual element
	Simple arrSimple[3] = {
		Simple ("Tom", 28, 3),
		Simple ("Mick", 30, 5),
		Simple ("Bill", 33, 8)
	};


	cin.get();

	return 0;
}
