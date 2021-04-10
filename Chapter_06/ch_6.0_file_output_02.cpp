#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream outFile;
	const int ArrSize1 = 30;
	char path[ArrSize1];
	cout << "Enter path for file (output_01.txt): ";
	//(cin >> path).get();
	cin.getline(path, ArrSize1);
	outFile.open(path);

	const int ArrSize2 = 30;
	char data[ArrSize2];

	cout << "Enter less then " << ArrSize2 << " symbols to wright to the file: ";
	cin.get(data, ArrSize2);

	outFile << data;
	outFile.close();
}
