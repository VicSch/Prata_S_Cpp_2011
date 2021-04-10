#include <iostream>
using namespace std;

int main() {
	const double finv = 100;
	double kleo_b, daphna_b;
	kleo_b = daphna_b = finv;
	double daphna_p = daphna_b * 0.1;
	int years = 1;
	cout << "Years\t" << "Daphna\t" << "Cleo\n";

	do
	{
		cout << years << '\t';
		daphna_b += daphna_p;
		cout << daphna_b << '\t';
		kleo_b += kleo_b * 0.05;
		cout << kleo_b << '\t' << endl;
		years++;
	} while (kleo_b <= daphna_b);

	cout << "=======================\n";
	cout << years-1 << '\t' << daphna_b << '\t';
	cout << kleo_b;
	cin.get();
}
