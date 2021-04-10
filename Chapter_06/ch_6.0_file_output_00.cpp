#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream outFile;
	outFile.open("output_00.txt");
	outFile << "Here text string to right to the file!!!";
	outFile.close();
}
