#include <iostream>

using namespace std;

int main() {
	
	int arr[2][2] = {{10, 20}, {30, 40}};

	cout << arr << endl;
	cout << *arr << endl << endl;

	cout << arr+2 << endl;
	cout << *(arr+2) << endl << endl;

	cout << (arr+2)+2 << endl;
	cout << *((arr+2)+2) << endl << endl;

	cout << *(arr+2)+1 << endl;
	cout << *(arr+2)+2 << endl << endl;

	cout << arr[0][0] << endl;
	cout << *(*arr) << endl << endl;

	cout << arr[0][1] << endl;
	cout << *(*(arr)+1) << endl << endl;

	cout << arr[1][0] << endl;
	cout << *(*(arr+1)) << endl << endl;

	cout << arr[1][1] << endl;
	cout << *(*(arr+1)+1) << endl << endl;

	cin.get();
}

/* Dereference pointers of two-demensial array
arr[a][b] == *(*(arr + a) + b);

s.338 (engl. book), s.333 (rus. book)
*/