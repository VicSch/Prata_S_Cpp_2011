#include <iostream>

using namespace std;

int main()
{
	const int Cities = 5;
	const int Years = 4;

	const char* cities[Cities] = {
		"Moscow",
		"St.Petersburg",
		"Perm",
		"Omsk",
		"Tomsk"
	};

	int tmp[Years][Cities] = {
		{20, 21, 25, 20, 19},
		{21, 23, 26, 21, 19},
		{20, 22, 24, 20, 18},
		{21, 22, 26, 21, 18},
	};
	cout << "Average temperature from 2009 - 2012 ";
	cout << endl << endl;

	for(int c = 0; c < Cities; c++) {
		cout << cities[c] << " :" << '\t';

		for(int y = 0; y < Years; y++) {
			cout << tmp[y][c] << '\t';
		}
		cout << endl;
	}
	cin.get();

}
