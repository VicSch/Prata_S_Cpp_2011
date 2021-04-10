#include <iostream>

using namespace std;

int main()
{
	// diclaration enumeration
	enum num {one, two, three, four, five};								// max range value - 4
	enum bits {bit_one = 1, bit_two = 2, bit_three = 3, bit_four = 4};	// max range value - 4
	enum count {first, second = 10, third, forth};						// max range value - 12

	// element of enumeration called enumerator (symbolic constant)

	// assign varieble q type num
	num q;
	q = one;
	cout << q << endl;
	q = three;
	cout << q << endl;
	int a = five;
	cout << a << endl;
	a += two;
	cout << a << endl;
	a =  2 + five;
	cout << a << endl;
	cout << "======================" << endl;
	// is't right
	// q = 2;
	// cout << q << endl;
	q = num(2);
	cout << q << endl;
	cout << "======================" << endl;
	count c;
	c = first;
	cout << c << ", ";
	c = second;
	cout << c << ", ";
	c = third;
	cout << c << ", ";
	c = forth;
	cout << c << ", ";

	cin.get();
	return 0;
}
