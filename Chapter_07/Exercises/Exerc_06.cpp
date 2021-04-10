#include <iostream>

using namespace std;

int fill_array(double arr[], int num);
void show_array(const double arr[], int num);
void reverse_array(double arr[], int num);

int main() {
	const int SIZE = 5;
	double list[SIZE];
	int n = fill_array(list, SIZE);
	show_array(list, n);
	reverse_array(list, n);
	show_array(list, n);

	cin.get();
	cin.get();
}

int fill_array(double arr[], int num) {
	int i;
	for (i = 0; i < num; ++i) {
		cout << "Enter value (char to stop fill array): ";
		double value;
		if(cin >> value)
			arr[i] = value;
		else{
			cin.clear();
			while(cin.get() != '\n')
			    continue;
			cin.unget();
			break;
		}
	}
	return i;
}

void show_array(const double arr[], int num) {
	cout << "Array: \n";
	for (int i = 0; i < num; ++i)
		cout << "Value #" << i << ": " << arr[i] << endl;
}

void reverse_array(double arr[], int num) {
	int i, j;
	double cp[num];

	for (i = 0; i < num; i++) 
		cp[i] = arr[i];
	
	for (i = 0, j = num-1; i < num; i++, j--) 
		arr[j] = cp[i];
}