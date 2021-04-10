#include <iostream>

namespace glb {
	int vali;
	double vald;
	int sum(int a, int b);	// prototype for glb namespace
}

int main() {

	using namespace glb;	// using directive 
	
	vali = 10;
	vald = 40;

	// this is local variable and it hide gloabal glb::vali variable
	int vali = 2;

	// allow useing name variables without glb:: identifier
	std::cout << "Local variable vali = " << vali << std::endl;
	std::cout << "Local variable vald = " << vald << std::endl;

	// but in other hand allow useing name variables with glb:: identifier
	std::cout << "Local variable vali = " << glb::vali << std::endl;
	std::cout << "Local variable vald = " << glb::vald << std::endl;

	std::cout << "Resolt of function sum() = " << sum(vali, vald) << std::endl;
	std::cout << "Resolt of function glb::sum() = " << sum(vali, vald) << std::endl;

	std::cin.get();

	return 0;
}

// definition of a glb namespace function
namespace glb {
	int sum(int a, int b) {
		return a + b;
	}	

}