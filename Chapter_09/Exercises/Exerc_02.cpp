#include <iostream>
#include <string>
using std::string;

// constants
// const int ArSize = 10;

// functions prototypes
void strcount(string str);

int main() {

	using namespace std;
	string input;
	string next;
	cout << "Enter a line: \n";
	getline(cin, input);

	while (!input.empty()) {

		strcount(input);
		cout << "Enter next line (empty line to quit) :\n";
		getline(cin, input);
	}

	cout << "Bye\n";
	cin.get();

	return 0;
}

void strcount(string str) {
	using namespace std;
	static int total = 0; // статическая локальная переменная
	int count = 0; // автоматическая локальная переменная
	cout << "V" << str << "\" contains ";

	// while (str++) // переход к концу строки
	// 	count++;

	count = str.size();
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}