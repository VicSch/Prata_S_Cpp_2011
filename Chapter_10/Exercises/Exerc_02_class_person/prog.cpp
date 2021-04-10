#include <iostream>
#include "header.h"

int main() {

	Person one;
	Person two ("Ivanoff");
	Person three ("Petroff", "Oleg");

	std::cout << "Peson One:\n";
	one.show();
	one.formalShow();
	std::cout << std::endl;

	std::cout << "Peson Two:\n";
	two.show();
	two.formalShow();
	std::cout << std::endl;

	std::cout << "Peson Three:\n";
	three.show();
	three.formalShow();
	std::cout << std::endl;
	
	std::cin.get();

	return 0;
}