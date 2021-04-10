#include <iostream>
using namespace std;

long double chanse(double maxnum, int picks);

int main() {
	
	long double chan;
	double max_num;
	double super_num;
	int p;
	cout << "Enter max number for loto and number of chanses: ";

	while(cin >> max_num >> p) {
	    chan = chanse(max_num, p);

	    if(max_num == 0 || p == 0)
	    	break;

	    cout << "Enter max number for SUPER NUMBER: ";
	    cin >> super_num;

	    cout << "Your chanse to win is 1 to " << chan * super_num << endl;
	    cout << "Enter next two numbers for loto (0 to quit): ";
	}

	cout << "Programm termenated.";
	cin.get();
	cin.get();
}

long double chanse(double maxnum, int picks) {

	double mult = 1.0;
	for (int i = picks; i > 0; i--) {
		mult *= maxnum / i;
		maxnum--;
	}
	return mult;
}