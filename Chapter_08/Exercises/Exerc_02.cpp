#include <iostream>
using namespace std;

const int SIZE = 20;
struct candyBar {
	char* name;
	double weight;
	int colories;
};
char nm[SIZE] = {"Millenium Munch"};
void candy(candyBar& cnd, char* n = nm, double w=2.85, int c=350);
void show(const candyBar& c);

int main() {

	candyBar c1;
	candy(c1);
	show(c1);

	char ps[SIZE] = "Other candy";
	// char* ps = &s;
	candy(c1, ps, 3.25, 380);
	show(c1);
	cin.get();
}

void candy(candyBar& cnd, char* n, double w, int c) {
	cnd.name = n;
	cnd.weight = w;
	cnd.colories = c;
}

void show(const candyBar& c) {
	cout << c.name << "; ";
	cout << c.weight << "; ";
	cout << c.colories << "; \n";
}