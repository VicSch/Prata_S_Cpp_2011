#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string charUpper(const string& st);

int main() {

	string ss;
	cout << "Enter a stirng (\'q\' to quit): ";

	while(cin >> ss && !(ss[0] == 'q' && ss.size() == 1)) {
		cout << charUpper(ss);
		cout << "\nEnter a stirng (\'q\' to quit): ";
	}
	cout << "Bay!";

	cin.get();
	cin.get();
}

string charUpper(const string& st) {
	int sz = st.size();
	string upstr = st;
	int i = 0;

	while(st[i]) {
		upstr[i] = toupper(st[i]);
		i++;
	}

	return upstr;
}