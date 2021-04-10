#include <iostream>
#include <cstring>
using namespace std;

int main() {

	cout << "Enter several words, word done ends task:" << endl;
	char str1[20];
	cin >> str1;
	int count = 0;

	while(strcmp(str1, "done")) {
	    cout << "Enter next word: ";
	    cin >> str1;
	    count++;
	}

	cout << "You entered " << count << " words";

	cin.get();
	cin.get();
}
