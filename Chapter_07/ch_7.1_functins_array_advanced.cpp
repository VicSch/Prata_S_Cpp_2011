#include <iostream>

// function prototypes
int fill_arr(double* arr, int size);
void show_arr(const double* arr, int size);
void reeval_arr(double reev, double* arr, int size);

int main() {
	using namespace std;

	int s = 5;
	double props[s];

	// fill array with price of properties
	int val = fill_arr(props, s);
	cout << val << " position of list was filled.\n";
	// show list of properties
	show_arr(props, val);

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
	reeval_arr(rf, props, val);
	show_arr(props, val);

	cout << "Done !!!";
	cin.get();
	cin.get();
}

// functions declaration
int fill_arr(double* arr, int size) {
	using namespace std;
	double price;
	int i = 0;

	for(i = 0; i < size; ++i) {
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

	return i;
}

void show_arr(const double* arr, int size) {
	using namespace std;
	
	for (int i = 0; i < size; ++i) {
		cout << "Price of property #" << i+1 << ": = $" << arr[i];
		cout << endl;
	}
}

void reeval_arr(double reev, double* arr, int size) {
	using namespace std;

	for (int i = 0; i < size; ++i)
		arr[i] *= reev;
}