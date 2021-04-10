#include <iostream>
#include <fstream>

using namespace std;

int main() {

	setlocale(LC_ALL, "rus");

	float		a = 0.123456789012345678901234567890123456789012345678901234567890F;
	double		b = 0.123456789012345678901234567890123456789012345678901234567890;

	cout.precision(ios::floatfield);
	cout << a << endl << b << endl;

	cout << "This is english text.\n";
	cout << "Это текст на кирилице, ё, ы, ю ...\n";

	cin.get();
	return 0;
}
