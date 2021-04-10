#include <iostream>

using namespace std;

int main()
{
	double prices[5] {1.25, 2.25, 3.25, 4.25, 5.25};

	// print array
	for(double p : prices){
		cout << p << endl;
	}

	cout << "======" << endl;

	// change value inside array and print them
	for(double &pr : prices) {
		pr = pr * 0.8;
		cout << pr << endl;
	}

	cin.get();
}
