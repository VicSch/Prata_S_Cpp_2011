#include <iostream>
#include "header.h"
using namespace std;

int main() {

	SALES::Sales st1;
	SALES::Sales st2;

	double q_values[SALES::QUARTERS] = {200, 300, 150, 350};
	int num = 4;

	using SALES::setSales;
	using SALES::showSales;

	setSales(st1, q_values, num);
	showSales(st1);
	cout << endl;

	setSales(st2);
	showSales(st2);

	cin.get();
	cin.get();

	return 0;
}
