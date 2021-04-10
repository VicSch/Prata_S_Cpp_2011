#include <iostream>
#include <cstring>
#include "header.h"

// constructors
Person::Person(const std::string &lname_, const char *fname_) {
	lname = lname_;
	// const char *prfn = fname;
	// prfn = fname_;
	strcpy(fname, fname_);		// assign char* to char[]
}

// destructor
Person::~Person() {};

// metods
void Person::show() const {				// format: neme, surename
	std::cout << fname << " " << lname << std::endl;
}

void Person::formalShow() const {		// format: surename, name
	std::cout << lname << " " <<  fname << std::endl;
}
