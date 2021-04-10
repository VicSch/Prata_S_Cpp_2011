#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream outFile;
	cout << "Enter path for file (output_01.txt): ";
	char path[20];
	// (cin >> path).get();		// use this but 2 line down must be commented
	cin >> path;
	cin.ignore();
	outFile.open(path);

	const int ArrSize = 50;
	char data[ArrSize];

	cout << "Enter less then " << ArrSize << " symbols to wright to the file: ";
	cin.get(data, ArrSize);

	outFile << data;
	outFile.close();
}
