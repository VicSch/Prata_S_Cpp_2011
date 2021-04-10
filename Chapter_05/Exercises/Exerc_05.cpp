#include <iostream>
using namespace std;

int main() {
	const char* months[12] = {
		"January",
		"Fabruary",
		"March",
		"April",
		"May",
		"June",
		"July",
		"Augus",
		"September",
		"October",
		"November",
		"December"
	};

	int mon_sell = 0;
	int summ = 0;

	for (int i = 0; i < 12; i++)
	{
		cout << "Count of books you sell in ";
		cout << months[i] << " : ";
		cin >> mon_sell;
		summ += mon_sell;
	}

	cout << "Your sell amount in the year is ";
	cout << summ << " books.";
	cin.get();
	cin.get();
}
