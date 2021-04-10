#include <iostream>
using namespace std;

int char_count(const char* str, char ch);
// int char_count(const char str[], char ch);
// we can pass string as an argument representing as
// array of char, pointer to char, or string literal

int main() {
	char line[20];
	char ch;
	cout << "Enter line of characters: ";
	cin >> line;
	cout << "Enter character: ";
	cin >> ch;
	int res = char_count(line, ch);
	cout << res;
	cin.get();
	cin.get();
}

int char_count(const char* str, char ch) {

	int count = 0;
	while(*str) {					// quit when '\0'
		if(*str == ch) count++;
		str++;						// move pointer to next character in array
	}
	return count;
}
