#include <iostream>
#include <new>
using namespace std;

const int BUF = 512;
const int N = 5;
char buffer[BUF];

template <class T>
void show_new(T*, T*, int);

int main() {

	double *pd1, *pd2;
	pd1 = new double[N];
	pd2 = new(buffer) double[N];
	cout << "Memory addresses:\n";
	cout << "Heap:\t" << pd1 << ";\tStatic: " << pd2;
	cout << ";\n";
	show_new(pd1, pd2, N);

	double *pd3, *pd4;
	pd3 = new double[N];			// find new block of memory
	pd4 = new(buffer) double[N];	// rewrite the same block
	show_new(pd3, pd4, N);
	delete[] pd1;
	// delete[] pd2;		// placement new can not delete because
							// it static block of menory , not heap

	pd1 = new double[N];								// take the same block as first new call
	pd2 = new(buffer + N * sizeof(double)) double[N];	// offset in memory for placement new
	show_new(pd1, pd2, N);
	delete[] pd1;

	cin.get();

	return 0;
}

template <class T>
void show_new(T* p1, T* p2, int num) {

	cout << "Memory content:\n";
	for (int i = 0; i < num; ++i) {
		T val = 1000 + 40 * i;
		p1[i] = p2[i] = val;
		cout << p1[i] << " at " << p1+i << ";\t";
		cout << p2[i] << " at " << p2+i << ";\n";
	}
}