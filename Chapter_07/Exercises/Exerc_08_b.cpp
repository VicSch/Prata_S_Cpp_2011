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

struct money {double expenses[Seasons];};

void fill(money* exp);
void show(money exp);

int main() {
	money exp;
	fill(&exp);
	show(exp);
	cin.get();
	cin.get();
}

void fill(money* exp) {
	
	for (int i = 0; i < Seasons; ++i) {
		cout << "Enter expenses in " << Name_seasn[i] << ": ";
		cin >> exp->expenses[i];
	}
}

void show(money exp) {
	
	cout << "EXPENSES:\n";
	double total = 0;

	for(int i = 0; i < Seasons; ++i) {
		cout << "Expenses in " << Name_seasn[i];
		cout << " = " << exp.expenses[i] << endl;
		total += exp.expenses[i];
	}

	cout << "Total: " << total;
}
