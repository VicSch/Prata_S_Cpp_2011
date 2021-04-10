#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream srcFile;
	srcFile.open("source.txt");
	char ch;
	int count = 0;
	while(srcFile >> ch) {
	    count++;
	}
	srcFile.close();
	cout << "in file " << count << " characters.";

	cin.get();
	// cin.get();
}
