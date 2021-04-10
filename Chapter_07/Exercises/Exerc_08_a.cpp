#include <iostream>
#include <array>
using namespace std;

/* constants created before prototypes and declaration
 functions, may be using in these function down the code */
const int Seasons = 4;
const char* Name_seasn[Seasons] {
	"Winter",
	"Spring",
	"Summer",
	"Autumn"
};

void fill(double* arr1);
void show(double arr2[]);

int main() {
	double expenses[Seasons];
	fill(expenses);
	show(expenses);
	cin.get();
	cin.get();
}

void fill(double* arr1) {
	
	for (int i = 0; i < Seasons; ++i) {
		cout << "Enter expenses in " << Name_seasn[i] << ": ";
		cin >> arr1[i];
	}
}

void show(double arr2[]) {
	
	cout << "EXPENSES:\n";
	double total = 0;

	for(int i = 0; i < Seasons; ++i) {
		cout << "Expenses in " << Name_seasn[i];
		cout << " = " << arr2[i] << endl;
		total += arr2[i];
	}

	cout << "Total: " << total;
}
