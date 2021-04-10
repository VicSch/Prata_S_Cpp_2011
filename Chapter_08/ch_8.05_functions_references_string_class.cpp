#include <iostream>
#include <string>

using namespace std;

string copy_st1(string& st1, string& st2);
string& copy_st2(string& st1, const string& st2);
const string& copy_st3(string& st1, const string& st2);
const string& copy_st4(const string& st1, const string& st2, string& st5);

int main() {

	string str1 = "-Hello world-";
	string str2 = "=====";
	string str3 = "xxxxx";
	string str4 = "#####";
	string str5;
	string copy = str1;

	cout << copy_st1(str1, str2) << endl;
	cout << copy_st2(str1, str3) << endl;
	str1 = copy;
	cout << copy_st3(str1, str4) << endl;
	str1 = copy;
	cout << copy_st4(str1, str4, str5) << endl;

	cin.get();


	return 0;
}

string copy_st1(string& st1, string& st2) {
	return st2 + st1 + st2;
}

string& copy_st2(string& st1, const string& st2) {
	st1 = st2 + st1 + st2;
	return st1;
}

const string& copy_st3(string& st1, const string& st2) {
	st1 = st2 + st1 + st2;
	return st1;
}

const string& copy_st4(const string& st1, const string& st2, string& st5) {
	st5 = st2 + st1 + st2;
	return st5;
}