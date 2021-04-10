#include <iostream>

using namespace std;

char* left_str(const char* line, int n=1);

int main() {
	
	const char SIZE = 30;
	cout << "Enter stirng less then " << SIZE << " characters: ";
	char line[SIZE];
	cin >> line;
	// char& ln = *line;
	cout << "Enter number of characters on the left of a string: ";
	int num;
	cin >> num;
	char* nline = left_str(line, num);
	cout << "The new string is: " << nline << endl;
	delete[] nline;

	cout << "Done!";
	cin.get();
	cin.get();
}

char* left_str(const char* line, int n) {
	// find length of string
	int w = 0;
	while(line[w])
	    w++;
	// create dynamic array
	char* new_line = new char[w+1];

	if(n < 0) 
		n = w+1;

	int i = 0;
	for (i = 0; i < n && line[i]; i++)
		new_line[i] = line[i];

	while(i <= w)
		new_line[i++] = '\0';

	return new_line;
}