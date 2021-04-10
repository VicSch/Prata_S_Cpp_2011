#include <iostream>
#include <cstring>
#include "golf.h"

// constructor
Golf::Golf() {		// default
	strcpy(fullname,"Not defined");
	handicap = 0;
}

Golf::Golf(const char *fullname_, int handicap_) {
	strcpy(fullname, fullname_);
	handicap = handicap_;
}

// destructor
Golf::~Golf() {};

// copy object in argument to current object
void Golf::set(Golf &g) {
	
	*this = g;
}

// set golf, return 1 if name is entred, else 0
int Golf::setGolfer() {
	
	using std::cout;
	using std::cin;

	cout << "Enter golfer name (0-9 to exit): ";
	char name[Len];
	cin >> name;

	if(strlen(name) > 1) {
		cout << "Enter handicap: ";
		int handicap;
		cin >> handicap;
		Golf temp = Golf(name, handicap);
		set(temp);
		return 1;
	}
	else
		return 0;
}


// set value of structure's field handicap
void Golf::setHandicap(int hc) {
	handicap = hc;
}

// get fullname value
const char *Golf::getName() const {
	return fullname;
}

// show golf structure
void Golf::show() const {
	using std::cout;
	using std::cin;

	cout << "Golfer name: " << fullname << "; ";
	cout << "Handicap: " << handicap << ";\n";
}
