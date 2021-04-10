#include <iostream>
using namespace std;

void print_i(const char* ch, int* num=0);

int main() {

	const char name[] = {"Hello"};
	int i = 1;
	int* n = &i;

	print_i(name, n);
	cout << "======\n";
	print_i(name, n);
	cout << "======\n";
	print_i(name, n);

	cin.get();
}

void print_i(const char* ch, int* num) {
	int limit = *num <= 0 ? 0 : *num;
	for (int i = 0; i < limit; i++) {
		cout << ch << endl;
		(*num)++;
	}
}