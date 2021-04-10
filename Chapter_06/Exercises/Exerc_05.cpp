#include <iostream>
#include <cctype>

using namespace std;

// bool isNum(void);

int main() {
	const long sum0 = 5000;
	const long sum1 = 15000;
	const long sum2 = 35000;

	const long tax_base1 = 10000;
	const long tax_base2 = 20000;

	const double tax_fee1 = 0.1;
	const double tax_fee2 = 0.15;
	const double tax_fee3 = 0.2;
	double tax_sum;
	long salary;

	cout << "Enter salary: ";
	cin >> salary;

	while(!cin.fail() && salary > 0) {
	    
	    if(salary <= sum0)
	    	tax_sum = 0;

	    if(salary > sum0) {
	    	if(salary - sum0 > tax_base1)
	    		tax_sum = tax_base1 * tax_fee1;
	    	else tax_sum = (salary - sum0) * tax_fee1;
	    }

	    if(salary > sum1) {
	    	if(salary - sum1 > tax_base2)
	    		tax_sum += tax_base2 * tax_fee2;
	    	else tax_sum += (salary - sum1) * tax_fee2;
	    }

	    if(salary > sum2) {
	    	long diff = salary - sum2;
	    	tax_sum += diff * tax_fee3;
	    }

	    cout << "Your tax fee is: " << tax_sum << endl;
	    cout << "Enter salary: ";
	    cin.get();
	    cin >> salary;
	}

	cin.clear();				// reset input
	while(cin.get() != '\n')	// get rid of bad input
		continue;
	cout << "Bay!!!";

	cin.get();
}