#include <iostream>
#include <cstring>
#include <cctype>
#include "golf.h"

// const extern int Len;

int main() {

	const int SIZE = 3;
	using std::cout;
	using std::cin;
	using std::endl;

	// array of objects class Golf
	Golf list[SIZE];
	
	int yes = 1;

	do {

		cout << endl << endl;
		cout << "1. Fill list of golfers.\n";
		cout << "2. Set handicap.\n";
		cout << "3. Show list of golfers.\n";
		cout << "0. Exit programm.\n\n";
		cout << "Choose the option: ";
		int opt;
		cin >> opt;

		switch(opt) {

			case 1: {	// Fill list of golfers

				int i, s;
				i = s = 0;
				do {
					s = list[i].setGolfer();
					++i;
				} while(i < SIZE && s);
				break;
			}

			case 2: {	// Set handicap
				
				const char *pr = list[0].getName();

				if(!strcmp(pr, "Not defined")) {
					cout << "List of golfers is empty yet. ";
					cout << "First fill the list.\n\n Press \'Enter\' to continue.\n";
					cin.ignore();
					if(cin.get() == '\n') 
					    continue;
				}

				else {
				// cycle for show all members of list
					for (int i = 0; i < SIZE; ++i) {
						cout << i+1 << ". ";
						list[i].show();
					}

					cout << "Choose golfer number which handicap you want to change: ";
					int num;
					cin >> num;
					cout << "Enter value of handicap: ";
					int hc;
					cin >> hc;
					list[num-1].setHandicap(hc);
					cout << "Handicap voalue has changed.\n";
					list[num-1].show();
				}

				break;
			}

			case 3: {	// Show list of golfers
				
				const char *pr = list[0].getName();
				if(!strcmp(pr, "Not defined")) {
					cout << "List of golfers is empty yet. ";
					cout << "First fill the list.\n\n Press \'Enter\' to continue.\n";
					cin.ignore();
					if(cin.get() == '\n') 
					    continue;
				}
				else {
				// cycle for show all members of list
					for (int i = 0; i < SIZE; ++i) {
						cout << i+1 << ". ";
						list[i].show();
					}
				}

				break;
			}

			case 0: {	// Exit programm

				cout << "Programm terminated. Bye!\n";
				break;
			}
		}
		yes = opt;

	} while(yes);

	cin.get();

	return 0;
}
