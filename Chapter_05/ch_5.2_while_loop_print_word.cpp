#include <iostream>

using namespace std;

int main()
{
	char name[10];
	cout << "Enter a word: ";
	cin >> name;
	int i = 0;
	while(name[i]) {
	    cout << name[i] << endl;
	    i++;
	}
	cout << "Simbol '\\0' has number - " << int('\0');
	cin.get();
	cin.get();
}
