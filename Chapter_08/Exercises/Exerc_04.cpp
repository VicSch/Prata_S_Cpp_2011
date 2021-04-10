#include <iostream>
#include <cstring>
using namespace std;

struct stringy {char* str; int ct;};

char* set(stringy& a, char* s);
void show(const stringy& a, int num=1);
void show(const char* a, int num=1);

int main() {

	stringy benny;
	char testing[] = "Reality is't what in used to bee";
	char* pt = set(benny, testing);
	show(benny);
	cout << endl;
	show(benny, 2);
	cout << endl;
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	cout << endl;
	show(testing, 3);
	cout << endl;
	show("Done!");
	delete[] pt;

	// cin.get();
	cin.get();
	return 0;
}

char* set(stringy& a, char* s) {
	int n = strlen(s);
	char* ptr = new char[n];
	a.str = s;
	a.ct = n;
	return ptr;
}

void show(const stringy& a, int num) {
	for (int i = 0; i < num; ++i)
		cout << a.str << endl;
}

void show(const char* a, int num) {
	for (int i = 0; i < num; ++i)
		cout << a << endl;
}