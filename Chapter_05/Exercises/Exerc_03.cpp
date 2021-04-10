#include <iostream>
using namespace std;

int main() {
	cout << "Enter a number:";
	int ent;
	cin >> ent;
	int sum = ent;

	while(ent != 0) {
	    cout << "Summ = "<< sum << endl;
	    cout << "Enter a number:";
		cin >> ent;
		sum += ent;
	}

	cout << "End of calculation.";
	cin.get();
	cin.get();
}
