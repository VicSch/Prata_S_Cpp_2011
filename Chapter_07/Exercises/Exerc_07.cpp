#include <iostream>

// function prototypes
double* fill_arr(double* arr, int size);
void show_arr(const double* arr, double* ar_end);
void reeval_arr(double reev, double* arr, double* ar_end);

int main() {
	using namespace std;

	int s = 3;
	double props[s];

	// fill array with price of properties
	double* a_end = fill_arr(props, s);
	cout << "Position of list was filled.\n";
	// show list of properties
	show_arr(props, a_end);

	// reevaluet price of properties
	double rf;
	cout << "Enter reevaluetion factor: ";
	cin >> rf;
	while(!cin) {
		cin.clear();
		while(cin.get() != '\n')
		    continue;
		cout << "Bad value, enter again: ";
		cin >> rf;
	}
	reeval_arr(rf, props, a_end);
	show_arr(props, a_end);

	cout << "Done !!!";
	cin.get();
	cin.get();
}

// functions declaration
double* fill_arr(double* arr, int size) {
	using namespace std;
	double price;
	int i = 0;

	for(i = 0; i < size; i++) {
		cout << "Enter price of property #" << i+1 << ": ";
		cin >> price;
		if(!cin) {
			cin.clear();
			while(cin.get() != '\n')
			    continue;
			cout << "Bad enter, programm terminated!\n";
			break;
		}
		// stop fill array if value is negative
		else if(price < 0) {
			cout << "Entering is ending.\n";
			break;
		}
		arr[i] = price;
	}

	return arr+i;
}

void show_arr(const double* arr, double* ar_end) {
	using namespace std;
	const double* pt;
	int i;
	
	for (pt = arr, i = 0; pt != ar_end; ++pt, ++i) {
		cout << "Price of property #" << i+1 << ": = $" << *pt;
		cout << endl;
	}
}

void reeval_arr(double reev, double* arr, double* ar_end) {
	using namespace std;

	double* pt;

	for (pt = arr; pt != ar_end; ++pt)
		*pt *= reev;
}
