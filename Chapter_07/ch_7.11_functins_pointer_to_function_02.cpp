#include <iostream>
using namespace std;

double betsy(int ln);
double pamela(int ln);
void estimate(int ln, double (*ptr)(int));

int main() {
	
	cout << "Enter count line of code: ";
	int lines;
	cin >> lines;
	cout << "Here is Betsy's estimate:\n";
	estimate(lines, betsy);
	cout << "Here is Pamela's estimate:\n";
	estimate(lines, pamela);

	cin.get();
	cin.get();
}

double betsy(int ln) {
	
	return ln * 0.05;
}

double pamela(int ln) {
	
	return ln * 0.03 + ln * ln * 0.0004;
}

void estimate(int ln, double (*ptr)(int)) {
	
	cout << ln << " lines of cone will take";
	cout << " estimete = " << (*ptr)(ln) << " hour(s).\n";
}