#include <iostream>

using namespace std;

int main()
{
	// union declaration
	union group
	{
		int int_val;
		long long_val;
		double double_val;
	};
	group foo;
	foo.int_val = 2;
	cout << "Size of value at this moment: " << sizeof foo.int_val << endl;
	cout << "Size of union: " << sizeof foo << endl;
	foo.double_val = 5;
	cout << "Size of value at this moment: "  << sizeof foo.double_val;
	cin.get();

	// union can be number of structure
	struct foo
	{
		char name;
		int ege;
		union some
		{
			int int_v;
			double double_v;
		};
	};

	// in this case (not working, why?)
	// foo chack;
	// chack.int_v = 3;
	// cout << chack.int_v;
	cin.get();

	return 0;
}
