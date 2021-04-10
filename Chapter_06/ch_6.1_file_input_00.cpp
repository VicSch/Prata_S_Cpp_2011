// create a file with data, read data form file
// output to the screen, and wright to the other file

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {

	char filename1[] {"source_file.txt"};
	char filename2[] {"new_file.txt"};

	ofstream datafile;
	ofstream newfile;
	ifstream source;

	// create file with data
	datafile.open(filename1);
	double source_data[] {2.3, 1.5, 4.8, 6.3, 9.1, 8.4, 7.7};
	for(double s: source_data)
		datafile << s << " ";
	datafile.close();

	// open a file and read data and wright to a new file
	source.open(filename1);
	newfile.open(filename2);
	double value;
	while(source >> value) {
		cout << value << " ";
		newfile << value << " ";
	}
	cout << endl;
	if(source.eof())
		cout << "End of the file." << endl;
	else if(source.fail())
		cout << "Data mismatch." << endl;
	else
		cout << "Input terminated by unknown reason." << endl;
	source.close();
	newfile.close();

	cin.get();
}
