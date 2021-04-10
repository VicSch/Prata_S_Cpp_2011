#include <iostream>
#include <fstream>

using namespace std;

void out_it(ostream& out, double ofoc, double efocs[], int size, int t, int tt);

int main() {

	ofstream fout;
	const char* fname = {"output.txt"};
	fout.open(fname);
	if(!fout.is_open()) {
		cout << "Can not open the file. ";
		cout << "File " << fname << " is open allready.\n";
		cout << "Press \'Enter\' button to quit.";
		cin.get();
		exit(EXIT_FAILURE);
	}

	double objectivefoc;
	cout << "Enter objective focal length value: ";
	cin >> objectivefoc;

	const int SIZE = 3;
	double eyepiecesfoc[SIZE];
	cout << "Enter focal length of " << SIZE << " eye pices:\n";
	for (int i = 0; i < SIZE; ++i) {
		cout << "Enter focal length of eyepiece #" << i+1 << ": ";
		cin >> eyepiecesfoc[i];
	}

	int col1 = 21;
	int col2 = 20;
	for (int i = 1; i <= col1+col2+4; ++i)
		cout << "=";
	cout << endl;

	out_it(cout, objectivefoc, eyepiecesfoc, SIZE, col1, col2);
	out_it(fout, objectivefoc, eyepiecesfoc, SIZE, col1, col2);

	fout.close();
	cout << "Done!";

	cin.get();
	cin.get();
	return 0;
}

void out_it(ostream& out, double ofoc, double efocs[], int size, int t, int tt) {

	ios_base::fmtflags initial;
	initial = out.setf(ios_base::fixed);		// copy initial format state
	out.precision(0);
	out << "Focal length of objective is: " << ofoc << " mm.\n";
	out.setf(ios::showpoint);
	out.precision(1);
	out.width(t);
	out << "Eyepiece focal length" << " |";
	out.width(tt);
	out << "Magnification" << " |\n";

	for (int i = 0; i < size; ++i) {
		out.width(t);
		out << efocs[i] << " |";
		out.width(tt);
		out << int(ofoc / efocs[i] + 0.5) << " |" << endl;
	}

	out.setf(initial);

}