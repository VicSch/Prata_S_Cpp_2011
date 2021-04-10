#include <iostream>
#include <vector>

using namespace std;

int main() {
	cout << "Enter max value to find factorial: ";
	int max;
	cin >> max;
	vector<long double> fact_vec{max+1};
	fact_vec[0] = fact_vec[1] = 1;
	for (int i = 2; i <= max; i++)
	{
		fact_vec[i] = fact_vec[i-1] * i;
	}
	cout << "Factorial of " << max << " equal - " << fact_vec[max];
	cin.get();
	cin.get();
}
