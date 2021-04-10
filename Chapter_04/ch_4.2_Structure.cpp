#include <iostream>

using namespace std;

int main()
{
	// struture diclaretion
	struct person {char name[15]; char surname[20]; int age;};

	// assing variable
	person misterx = {"Arthur", "Smith", 25};
	// or (c++11
	// person misterx {"Arthur", "Smith", 25};

	cout << "Our guest is " << misterx.name << " ";
	cout << misterx.surname << " " << misterx.age << " years old";

	// create array of structure
	person group[2] 
	{
		{"Jhon", "Smith", 30},
		{"Ben", "Watts", 31}
	};
	cout << group[0].name << " " << group[0].surname << ", " << endl;
	cout << group[1].name << " " << group[1].surname << "." << endl;

	group[0].age = 35;
	group[1].age = 45;
	cout << group[0].age << " - " << group[1].age;
	cin.get();
	return 0;
}
