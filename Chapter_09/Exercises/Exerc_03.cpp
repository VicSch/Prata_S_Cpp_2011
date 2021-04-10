#include <iostream>
#include <cstring>
#include <new>

using std::cout;
using std::cin;
using std::endl;

struct chaff {char dross[20]; int slag;};
char buffer[50];
const int SIZE = 2;

void set(chaff* st);
void show(chaff* st);

int main() {

	chaff *sptr1, *sptr2;
	sptr1 = new(buffer) chaff[SIZE];

	cout << "Buffer addres: " << &buffer << endl;
	cout << "Plasement new addres: " << sptr1 << endl;
	
	cout << endl;
	sptr2 = new chaff[SIZE];

	// fill plasement new struct[]
	set(sptr1);
	// fill new struct[]
	set(sptr2);
	cout << endl;

	show(sptr1);
	cout << endl;
	show(sptr2);

	delete [] sptr2;

	cin.get();
	cin.get();
	return 0;
}

void set(chaff* st) {
	for (int i = 0; i < SIZE; ++i) {
		cout << "Enter dross value (char string): ";
		char dross[20];
		cin >> dross;
		// *(st+i)->dross = *dross;
		strcpy((st+i)->dross, dross);
		cout << "Enter slang value (int): ";
		int slag;
		cin >> slag;
		(st+i)->slag = slag;
		// cout << (st+i) << endl;
	}
}

void show(chaff* st) {
	for (int i = 0; i < SIZE; ++i) {
		cout << (st+i)->dross << "; " << (st+i)->slag << endl;
		cout << (st+i) << endl;
	}
}