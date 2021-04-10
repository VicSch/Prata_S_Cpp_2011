#include <iostream>
#include <cstring>
#include "golf.h"

// extern int Len;
// struct golf;

// set structure golf
void setgolf(golf& g, const char* name, int hc) {
	
	for (int i = 0; i < Len; ++i)
		g.fullname[i] = *(name+i);

	g.handicap = hc;
}
// set golf, return 1 if name is entred, else 0
int setgolf(golf& g) {
	
	using std::cout;
	using std::cin;

	cout << "Enter golfer name (0-9 to exit): ";
	char name[Len];
	// cin.getline(name, Len);
	cin >> name;

	if(strlen(name) > 1) {
		cout << "Enter handicap: ";
		int handicap;
		cin >> handicap;
		setgolf(g, name, handicap);
		return 1;
	}
	else
		return 0;
}


// set value of structure's field handicap
void handicap(golf& g, int hc) {
	g.handicap = hc;
}

// show golf structure
void showgolf(const golf& g) {
	using std::cout;
	using std::cin;

	cout << "Golfer name: " << g.fullname << "; ";
	cout << "Handicap: " << g.handicap << ";\n";
}
