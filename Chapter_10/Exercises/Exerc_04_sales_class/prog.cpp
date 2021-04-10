#include <iostream>
#include "header.h"
using namespace std;

int main() {

	double q_values[SALES::QUARTERS] = {200, 300, 150, 350};
	int num = 4;

	SALES::Sales st1 = SALES::Sales(q_values, num);
	SALES::Sales st2;

	// using SALES::st1;
	// using SALES::st2;

	// st1.setSales();
	st1.showSales();
	cout << endl;

	st2.setSales();
	st2.showSales();

	cin.get();
	cin.get();

	return 0;
}
