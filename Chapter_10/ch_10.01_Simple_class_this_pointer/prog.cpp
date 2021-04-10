#include <iostream>
#include "header.h"

int main() {
	{
		std::cout << "Create Tom.\n";

		Simple tom("Tom", 33, 1);
		tom.real_hourly();
		tom.setShifts(10);
		tom.print();
		std::cout << std::endl;

		std::cout << "Create Mick.\n";
		Simple mick = Simple("Mick", 20, 3);
		mick.real_hourly();
		mick.setShifts(15);
		mick.print();
		std::cout << std::endl;

		std::cout << "Get max salary of Tom and Mick.\n";
		const Simple &maxSal = tom.maxSalary(mick);
		std::cout << "Max salary have " << maxSal.getName() << " - ";
		std::cout << maxSal.getSalary() << std::endl;
		std::cout << std::endl;
	}

	std::cin.get();

	return 0;
}