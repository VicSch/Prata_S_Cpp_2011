#include <iostream>

namespace glb {
	int vali;
	double vald;
	int sum(int a, int b);	// prototype for glb namespace
}

int sum(int a, int b);		// gloabal prototype

int main() {

	int vali = 10;
	glb::vali = 20;
	double vald = 40;
	glb::vald = 50;

	std::cout << "Local variable vali = " << vali << std::endl;
	std::cout << "Global variable glb::vali = " << glb::vali << std::endl;
	std::cout << "Local variable vald = " << vald << std::endl;
	std::cout << "Global variable glb::vald = " << glb::vald << std::endl;

	std::cout << "Resolt of function sum() = " << sum(vali, glb::vali) << std::endl;
	std::cout << "Resolt of function glb::sum() = " << glb::sum(vald, glb::vald) << std::endl;

	std::cin.get();

	return 0;
}

// definiton of a gloabal function
int sum(int a, int b) {
	return a + b;
}

// definition of a glb namespace function
namespace glb {
	int sum(int a, int b) {
		return a + b;
	}	

}