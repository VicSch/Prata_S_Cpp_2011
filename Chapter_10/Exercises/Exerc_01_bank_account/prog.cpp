#include <iostream>
#include "header.h"

int main() {

	BankAcc bill;
	bill.show();
	std::cout << std::endl;
	bill.setName("Bill");
	bill.setAccount("093");
	std::cout << std::endl;
	bill.setAccount("0933856073865");
	std::cout << std::endl;
	bill.setAccount("09338567");
	bill.show();
	std::cout << std::endl;

	BankAcc tom ("Tom");
	tom.show();
	std::cout << std::endl;

	double sum = -10;
	tom.add(sum);
	sum = 100;
	tom.add(sum);
	tom.show();
	std::cout << std::endl;

	sum = 200;
	tom.take(sum);
	sum = 50;
	tom.take(sum);
	tom.show();
	
	std::cin.get();

	return 0;
}