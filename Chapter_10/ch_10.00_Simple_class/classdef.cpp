#include <iostream>
#include "header.h"

// class constructors
Simple::Simple() {		// default
	name = "No defined";
	age = 16;		// minimal age
	experience = 0;	// minimal rate
	setShifts();

	std::cout << "Constructor " << name << " was triggered\n";
}

Simple::Simple(const std::string name_, int age_, int experience_) {
	name = name_;
	age = age_;					// minimal age
	experience = experience_;	// minimal rate
	setShifts();

	std::cout << "Constructor " << name << " was triggered\n";
}

Simple::~Simple() {		// class destructor, usually empty
	std::cout << "Desructor of " << name << " was triggered.\n";
}

// hourly rate regard to experience
void Simple::real_hourly(double hour) {
	
	double k = 1.0;
	if(experience >= 1 && experience <= 2)
		k = 1.5;
	else if(experience > 2 && experience <= 5)
		k = 2.5;
	else if(experience > 5)
		k = 3.5;
	hourly = hour * k;
}

void Simple::setName(std::string n) {
	name = n;
}

void Simple::setAge(int a) {
	age = a;
}

void Simple::setExper(int exp) {
	experience = exp;
}

void Simple::setShifts(int shs) {
	shifts = shs;
	mon_salary(shifts);
}

// count month's salary, shs is shifts in month
void Simple::mon_salary(int shs) {
	
	real_hourly();
	if(shs > 0)
		shifts = shs;

	salary = shifts * hourly * 8;
}
// classificator 'const' at the end means that object can't be changed.
void Simple::print() const {

	std::cout << "Employee " << name << ": " << age << " age old.\n";
	std::cout << "Work rate: " << hourly << "; ";
	std::cout << "Month salary: " << salary << ".\n";
}
