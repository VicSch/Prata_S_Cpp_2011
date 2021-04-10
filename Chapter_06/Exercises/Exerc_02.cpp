#include <iostream>
#include <cctype>
#include <array>

using namespace std;

int main() {
	
	array <double, 10> list;
	double summ;
	double avrg;
	int count = 0;

	while(count < list.size()) {
	    
	    cout << "Enter value #" << count+1 << " of contribution: ";
	    
	    if(cin >> list[count]) {

	    	summ += list[count];
	    	count++;
	    }
	    else {
	    	cin.clear();				// reset input
	    	while(cin.get() != '\n')	// get rid of bad input
	    		continue;
	    	cout << "This is not a digit value, try again. \n";
	    }  
	}

	avrg = summ / double(count);
	int bigger_avrg = 0;

	for (double v : list) {
		if(v > avrg) bigger_avrg++;
	}

	cout << "Summa of all contributions is: " << summ << endl;
	cout << "Average amount of contributions is " << avrg << endl;
	cout << bigger_avrg << " contributions are bigger then average value.";

	cin.get();
	cin.get();
}