#include <iostream>
#include <array>
using namespace std;

/* constants created before prototypes and declaration
 functions, may be using in these function down the code */
const int Seasons = 4;
const array<string, Seasons> Nseason {
	"Winter",
	"Spring",
	"Summer",
	"Autumn"
};

void fill(array<double, Seasons>* arr1);
void show(array<double, Seasons> arr2);

int main() {
	array<double, Seasons> expenses;
	fill(&expenses);
	show(expenses);
	cin.get();
	cin.get();
}

void fill(array<double, Seasons>* arr1) {
	
	for (int i = 0; i < Seasons; ++i) {
		cout << "Enter expenses in " << Nseason[i] << ": ";
		cin >> (*arr1)[i];
	}
}

void show(array<double, Seasons> arr2) {
	
	cout << "EXPENSES:\n";
	double total = 0;

	for(int i = 0; i < Seasons; ++i) {
		cout << "Expenses in " << Nseason[i];
		cout << " = " << arr2[i] << endl;
		total += arr2[i];
	}

	cout << "Total: " << total;
}
