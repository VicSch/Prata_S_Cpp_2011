#include <iostream>
#include <cstring>
#include "header.h"

Plorg::Plorg() {
	strcpy(name, "Plorga");
	ci = 50;
}

Plorg::Plorg(char name_[], int ci_) {
	strcpy(name, name_);
	ci = ci_;
}

Plorg::~Plorg() {}

void Plorg::setName(char *n) {
	strcpy(name, n);
}

void Plorg::setCi(int c) {
	ci += c;
}

void Plorg::show() const {
	std::cout << "Name: " << name << std::endl;
	std::cout << "CI = " << ci << std::endl;
	std::cout << "===============\n";
}