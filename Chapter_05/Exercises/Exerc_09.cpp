#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "Enter several words, word done ends task:" << endl;
	string str1;
	cin >> str1;
	int count = 0;

	while(str1 != "done") {
	    cout << "Enter next word: ";
	    cin >> str1;
	    count++;
	}

	cout << "You entered " << count << " words";

	cin.get();
	cin.get();
}
