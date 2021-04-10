#include <iostream>

using namespace std;

char* left_str(const char* line, int n=1);
unsigned long left_str(const unsigned long num, int n=3);

int main() {
	
	const char SIZE = 12;
	unsigned long num = 1234567890;
	char line[SIZE+1] = "qwertyuiop";
	unsigned long n;
	char* l;

	for (int i = 0; i < SIZE; i++) {
		n = left_str(num, i);
		cout << n << endl;
		l = left_str(line, i);
		cout << l << endl;
		delete[] l;
	}

	cout << "Done!";
	cin.get();
}

// return n first digits of number
unsigned long left_str(const unsigned long num, int n) {

	// find number of digits in num
	int w = 1;
	unsigned long number = num;
	while(number /= 10)
		w++;
	// return full num if n bigger then num or smaller then 0 
	if(n <= 0 || n >= w)
		n = w;

	number = num;
	int steps = w - n;
	for (int i = 1; i <= steps; i++) {
		number /= 10;
	}
	return number;
}

// return n first characters of string
char* left_str(const char* line, int n) {
	// find length of string
	int w = 0;
	while(line[w])
	    w++;
	// create dynamic array
	char* new_line = new char[w+1];

	if(n <= 0) 
		n = w+1;

	int i = 0;
	for (i = 0; i < n && line[i]; i++)
		new_line[i] = line[i];

	while(i <= w)
		new_line[i++] = '\0';

	return new_line;
}