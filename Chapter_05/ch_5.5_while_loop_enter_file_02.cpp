// direct text stream from text file to this programm
// type in console: programm < text_file
#include <iostream>

using namespace std;

int main()
{
	char ch;
	int count = 0;

	while(cin.get(ch)) {
	    cout << ch;
	    ++count;
	}

	cout << endl;
	cout << "You entered " << count << " symbols";
	cout << endl;
} 