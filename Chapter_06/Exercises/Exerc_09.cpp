#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {

	// declare structures: name, donation
	struct ozvl {string name; double donat;};

	// declare dynamic array of structures
	int arSize = 10;
	ozvl* patron = new ozvl[arSize];

	// invitation
	cout << "Enter name of patrion and value of his donation.\n";
	cout << "1. Start entering.\n";
	cout << "2. Read from file \'patrons.txt\'.\n";
	cout << "3. Print the list of patrons.\n";
	cout << "4. Exit.\n\n";
	cout << "Enter your choice: ";
	int variant;
	cin >> variant;

	// menu do while loop
	do {
		// switch
		switch(variant) {
			case 1:
			{
				
				cout << "Enter number of patrons: ";
				cin >> arSize;
				// fill structure data
				for (int i = 0; i < arSize; ++i) {
					cout << "Enter Name of patron: ";
					cin >> patron[i].name;
					cout << "Enter donation value: ";
					cin >> patron[i].donat;
				}

				cout << "List of patrons is fill.\n";
				cout << "Enter your choice: ";
				cin >> variant;
				break;
			}

			case 2:
			{
				
				string filename = "patrons.txt";
				ifstream srcFile;
				srcFile.open(filename);
				string line;
				int first_count = 0;
				int line_count = 0;
				// srcFile.getline(line, 20);

				if (srcFile.fail()) {
			        cerr << "Error opeing a file" << endl;
			        srcFile.close();
			        exit(1);
			    }

				while(getline(srcFile, line)) {
				    if(first_count == 0) {
				    	arSize = stoi(line);
				    	first_count = 1;
			    	}
			    	else {
			    		int var;
			    		if((line_count%2) == 0) var = 0;
			    		else var = 1;
			    		int idx = line_count/2;

			    		switch(var) {
			    			case 0:
			    			{	
			    				patron[idx].name = line;
			    				break;
			    			}
		    				case 1:
		    				{
		    					patron[idx].donat = double(stoi(line));
		    					break;
		    				}
			    		}

			    		line_count++;
			    	}

				}

				cout << arSize << ".\n";
				srcFile.close();
				cout << "List of patrons is fill.\n";
				cout << "Enter your choice: ";
				cin >> variant;
				break;
			}

			case 3:
			{
				
				// check if array has filled	
				string test = patron[0].name;

				if(test == "")
					cout << "\nList of patrons is empty. Please fill it first.\n";
				else {
					vector <string> gpatr;
					vector <string> patr;

					// sort array by donation size
					const double Range = 100;
					
					for (int i = 0; i < arSize; ++i) {

						// sort 'Grand Patrons' (more then $Range)
						if(patron[i].donat > Range)
							gpatr.push_back(patron[i].name);

						// sort 'Patrons' (less then $Range)
						else 
							patr.push_back(patron[i].name);
					}

					// output on the screan sort list Grand pattons ans Patrons
					int gp_size = gpatr.size();

					if(gp_size) {

						cout << "\nGrand Patrons:\n";

						for (int i = 0; i < gp_size; ++i){
							cout << gpatr[i] << endl;
						}
					}
					else
						cout << "\nGrand Patrons:\n None.\n";

					int p_size = patr.size();

					if(p_size) {

						cout << "\nPatrons:\n";

						for (int i = 0; i < p_size; ++i){
							cout << patr[i] << endl;
						}
					}
					else
						cout << "\nPatrons:\nNone.\n";
				}

				cout << "\nEnter your choice: ";
				cin >> variant;
				break;
			}

			case 4: delete[] patron;
				break;

			default:
			{
				cin.clear();				// reset input
				while(cin.get() != '\n')	// get rid of bad input
					continue;

				cout << "\nYou should enter number from 1 to 3.\n";
				cout << "\nEnter your choice: ";
				cin >> variant;
			}
		}

	} while(variant != 4);

	cout << "\nBay !!!\n";
	cin.get();
	cin.get();
}
