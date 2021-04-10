#include <iostream>

namespace glb {
	int vali;
	double vald;
	int sum(int a, int b);	// prototype for glb namespace
}

int sum(int a, int b);		// gloabal prototype

int main() {

	using glb::vali;		// using declaration for glb::vali
							// we can use name vali instead of glb::vali
	vali = 20;
	glb::vald = 50;

	std::cout << "Global variable glb::vali = " << vali << std::endl;
	std::cout << "Global variable glb::vald = " << glb::vald << std::endl;

	std::cout << "Resolt of function sum() = " << sum(vali, glb::vald) << std::endl;
	std::cout << "Resolt of function glb::sum() = " << sum(vali, glb::vald) << std::endl;

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