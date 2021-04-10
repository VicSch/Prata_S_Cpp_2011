#include <iostream>
using namespace std;

int main() {
	const char* months[12] {
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

	int year[3] = {2018, 2019, 2020};
	int sells[3][12];
	int year_s[3];

	int mon_sell, all_summ;
	mon_sell = all_summ = 0;

	cout << endl;

	for(int y = 0; y < 3; y++) {

		int year_summ = 0;
		for (int i = 0; i < 12; i++)
		{
			cout << "Count of books you sell in ";
			cout << months[i] << " of " << year[y] << ": ";
			cin >> mon_sell;
			sells[y][i] = mon_sell;
			year_summ += mon_sell;
		}
		year_s[y] = year_summ;
		all_summ += year_summ;
	}

	// output on screan
	cout << endl << '\t' << " | ";

	for (int m = 0; m < 12; m++)
	{
		cout << months[m]<< '\t' << " | ";
	}
	cout << endl;

	for (int y = 0; y < 3; y++)
	{
		cout << year[y] << '\t' << " | ";

		for (int i = 0; i < 12; i++)
		{
			cout << sells[y][i] << '\t' << '\t';
		}

		cout << '\t' << year_s[y] << endl;
	}

	cout << all_summ << endl;

	// cout << "Your sell amount in the year is ";
	// cout << summ << " books.";
	cin.get();
	cin.get();
}