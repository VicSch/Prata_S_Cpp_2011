#include <iostream>
#include <string>

using namespace std;

struct list
{
	string name;
	string city;
	int date;
	double persent;
};

list& cp_prs(list& l1, const list& l2);		// copy stucture
void show_prs(const list& l1);				// display stucture

int main() {

	list students1;
	list students2 {
		"Tom Widmen",
		"New York",
		25,
		95.4
	};
	list students3;
	
	show_prs(students2);
	cout << "==================\n";

	list result = cp_prs(students1, students2);
	show_prs(students2);
	cout << "==================\n";

	show_prs(cp_prs(students3, students2));

	cin.get();

	return 0;
}

list& cp_prs(list& l1, const list& l2) {
	l1 = l2;
	return l1;
}

void show_prs(const list& l1) {
	cout << l1.name << "; ";
	cout << l1.city << "; ";
	cout << l1.date << "; ";
	cout << l1.persent << "\n";
}