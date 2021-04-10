#include <iostream>
#include "header.h"

int main() {
	{
		std::cout << "Three Simple objects: ben, tom, mick.\n";
		std::cout << std::endl;

		Simple ben;
		ben.print();
		std::cout << std::endl;

		Simple tom("Tom", 33, 1);
		tom.real_hourly();
		tom.setShifts(10);
		tom.print();
		std::cout << std::endl;

		Simple mick = Simple("Mick", 20, 3);
		mick.real_hourly();
		mick.print();
		std::cout << std::endl;

		std::cout << "Enter name, age and experience for ben, and set hourly and shifts.\n";
		ben.setName("Ben");
		ben.setAge(29);
		ben.setExper(6);
		ben.real_hourly();
		ben.setShifts(20);
		ben.print();
		std::cout << std::endl;

		std::cout << "Enter shifts for mick.\n";
		mick.setShifts(15);
		mick.print();
	}

	std::cin.get();

	return 0;
}