#include <iostream>

using namespace std;

int main()
{
	char ch;
	cin.get(ch);
	int count = 0;

	while(ch != '#') {
	    cout << ch;
	    ++count;
	    cin.get(ch);
	}

	cout << endl;
	cout << "You entered " << count << " symbols";
	cin.get();
	cin.get();
}