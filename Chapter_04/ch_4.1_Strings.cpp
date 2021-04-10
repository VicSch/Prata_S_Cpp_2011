#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	// declaration and initiolizing of string, must be end of string sing (\0)
	char abc[10] = {'a','b','c','d','f','\0'};
	char foo[10] = "MisterX";
	char xyz[] = "Axises";

	char charConst = 'A';		// character constant
	char strConst[4] = "dog";		// string constant

	// concatenation string literals
	cout << charConst << " " << strConst << endl;
	cout << "What's" " this?" << endl;

	char name[20];
	cout << "Enter your name: ";
	cin.getline(name, 20);
	cout << "Are your " << name << "?"<< endl;
	cout << "Your name " << name << " has ";
	cout << strlen(name) << " characters!";
	cin.get();

	// objects string from class <string>
	string myName = "Victor";
	string mySurename = "Sh";
	string space;
	cout << "Enter dush simbol: ";
	cin >> space;
	cin.get();
	cout << myName << space << mySurename;
	cin.get();

	// another type of initializing (c++11)
	char name1[] {"Sergey"};
	string name2 {"Vladimir"};

	// concatenation string objects
	string str1 {"_"};
	myName += str1;
	cout << "Concatenation string objects: " << myName + mySurename;
	cin.get();

	
	// function for char array from <cstring>
	char charr1[20];
	char charr2[5];
	strcpy(charr1, charr2);		// copy charr2 to charr1
	strcat(charr1, charr2);		// append contents of charr2 to char1

	int len1 = myName.size();	// obtain length of str1
	int len2 = strlen(foo);		// obtain length of charr1

	cout << "Lenght of " << myName << " is: " << len1 << endl;
	cout << "Lenght of " << foo << " is: " << len2 << endl;
	cin.get();

	return 0;
}
	