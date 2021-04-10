#include <iostream>

using namespace std;

int main() {

	cout << "Please enter one of the following choices:\n";
	cout << "a: Automobile.\t" << "b: Boolian.\n";
	cout << "c: Center. \t" << "d: Dramm.\n";
	cout << "Enter \'q\' to exit.\n";
	char enter;
	cout << "Enter a letter: ";
	cin >> enter;

	while(enter != 'q') {

		switch(enter) {
			case 'a': cout << "Automobile.\n";
				break;
			case 'b': cout << "Boolian.\n";
				break;
			case 'c': cout << "Center.\n";
				break;
			case 'd': cout << "Dramm.\n";
				break;
			default: cout << "You should enter \'a\', \'b\', \'c\' or \'d\' letters.\n";
		}
		cin >> enter;
	}

	cin.get();
}
