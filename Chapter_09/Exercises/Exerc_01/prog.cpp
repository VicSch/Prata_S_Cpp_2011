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

	// struct golf;
	golf list[SIZE];

	// fill array with empty stucts, for checking inside a switch
	golf empty;
	char emp[Len] = {"Empty"};
	for(int i = 0; i < 10; ++i)
		empty.fullname[i] = emp[i];
	empty.handicap = 0;
	for (int i = 0; i < SIZE; ++i)
		list[i] = empty;

	
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
					s = setgolf(list[i]);
					++i;
				} while(i < SIZE && s);
				break;
			}
			case 2: {	// Set handicap
				
				if(!strcmp(list[0].fullname, "Empty")) {
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
						showgolf(list[i]);
					}

					cout << "Choose golfer number which handicap you want to change: ";
					int num;
					cin >> num;
					cout << "Enter value of handicap: ";
					int hc;
					cin >> hc;
					handicap(list[num-1], hc);
					cout << "Handicap voalue has changed.\n";
					showgolf(list[num-1]);
				}

				break;
			}
			case 3: {	// Show list of golfers
				if(!strcmp(list[0].fullname, "Empty")) {
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
						showgolf(list[i]);
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
