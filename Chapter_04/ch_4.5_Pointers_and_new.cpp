#include <iostream>

using namespace std;

int main()
{
	int num0 = 10;
	// pointer declaration
	int* ptr = &num0;
	// unnaming pointer
	int num1 = *ptr;
	cout << "Information in the pointer ptr: " << ptr << endl;
	cout << "Value the pointer ptr look at: " << *ptr << endl;

	// dynamic memory allocation with 'new'
	float* ptr0 = new float;
	// after end operation with pointer 'ptr0' clear memory
	// use 'delete' only tor pointers declared with 'new'
	delete ptr0;
	// dynamic array allocation with 'new'
	int* ptr1 = new int[3];
	// access to dynamic array
	ptr1[0] = 2;
	ptr1[1] = 4;
	ptr1[2] = 8;
	cout << "First element of dynamic array ptr1[0]:" << ptr1[0] << endl;
	cout << "Second element of dynamic array ptr1[1]:" << ptr1[1] << endl;
	cout << "Therd element of dynamic array ptr1[2]:" << ptr1[2] << endl;
	// add value to pointer's name give next addres
	// ptr1 = ptr1 + 1;
	// cout << "ptr1 + 1 give us second addres: " << ptr1[0] << endl;

	// clear dynamic array
	delete[] ptr1;

	// initialization with new C++98
	int* pi = new int (7);
	// initialization with new C++11
	double* pd = new double {20.5};
	// initialization array with new C++11
	int* pa = new int[3] {1, 2, 3};
	// initialization structure with new C++11
	struct vec {double x; double y; double z;};
	vec* one = new vec {1.0, 2.0, 3.0};
	delete pi;
	delete pd;
	delete [] pa;
	delete one;

	cin.get();
	return 0;
}
