#include <iostream>
#include "header.h"

// constructors
BankAcc::BankAcc() {
	name = "Not defined";
	accaunt = "00000000";
	balance = 0.0;
}

BankAcc::BankAcc(std::string name_, std::string accaunt_, double balance_) {
	name = name_;
	accaunt = accaunt_;
	balance = balance_;
}

// destructor
BankAcc::~BankAcc() {};

// private functions
void BankAcc::update(double s) {
	balance += s;
}

// metods
void BankAcc::show() const {
	std::cout << "Client's name: " << name << ";\n";
	std::cout << "Client's accaunt: " << accaunt << ";\n";
	std::cout << "Client's balance: $" << balance << ";\n";
	std::cout << "=====================" << std::endl;
}

void BankAcc::add(double s) {
	
	if(s < 0)
		std::cout << "You can not add sum less the zero into your accaunt.\n";
	else
		update(s);
}

void BankAcc::take(double s) {
	
	if(s > balance) {
		std::cout << "You can not take sum bigger then your balance.\n";
		std::cout << "At this moment your balance is: $" << balance << ".\n";
	}
	else
		update(-s);
}

void BankAcc::setName(std::string n) {
	name = n;
}

void BankAcc::setAccount(std::string acc) {

	if(acc.size() != 8)
		std::cout << "You should enter 8 number.\n";
	else
		accaunt = acc;
}