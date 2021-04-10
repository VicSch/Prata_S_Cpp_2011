// direct text stream from text file to this programm
// type in console: programm < text_file
#include <iostream>

using namespace std;

int main()
{
	char ch;
	cin.get(ch);
	int count = 0;

	while(cin.fail() == false) {
	    cout << ch;
	    ++count;
	    cin.get(ch);
	}

	cout << endl;
	cout << "You entered " << count << " symbols";
	cout << endl;
}