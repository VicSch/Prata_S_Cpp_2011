#include <iostream>
using namespace std;

char* char_mult(int num, char str);
// int char_count(const char str[], char ch);
// we can pass string as an argument representing as
// array of char, pointer to char, or string literal

int main() {
	int n;
	char ch;
	cout << "Enter number of characters: ";
	cin >> n;
	cout << "Enter character: ";
	cin >> ch;

	char* res = char_mult(n, ch);
	cout << res << endl;
	delete[] res;

	// secondary usage of pointer res
	char word[] = "second";
	res = word;
	cout << "This is second usage of pointer: ";
	cout << res;	// this time we don't nead use delete[] res
					// becouse dynamic arrey wasn't created
					// in function char_mult()
	cin.get();
	cin.get();
}

char* char_mult(int num, char str) {

	char* line = new char[num+1];
	line[num] = '\0';

	while(num--)			// first compare num, then decrementing, then loop
		line[num] = str;

	// return pointer to char array
	return line;
}
