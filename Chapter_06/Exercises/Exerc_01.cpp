#include <iostream>
#include <cctype>
using namespace std;

int main() {
	char ch;
	cin >> ch;
	while(ch != '@') {

		if(isupper(ch))
	    	cout << char(tolower(ch)) << '\n';
	    else if(islower(ch))
	    	cout << char(toupper(ch)) << '\n';
	    else
	    	cout << char(ch) << '\n';
	    cin >> ch;
	}
}
