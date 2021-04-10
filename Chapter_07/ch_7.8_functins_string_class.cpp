#include <iostream>
#include <string>
using namespace std;

void display(const string str[], int n);

int main() {

	const int SIZE = 5;
	string list[SIZE];

	for (int i = 0; i < SIZE; ++i) {

		cout << "Enter word #" << i+1 << ": ";
		getline(cin, list[i]);
	}

	display(list, SIZE);
	cin.get();
}

void display(const string str[], int n) {

	for (int i = 0; i < n; ++i)
		cout  << "#" << i+1 << ": " << str[i] << endl;
}