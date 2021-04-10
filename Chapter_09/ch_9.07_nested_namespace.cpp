#include <iostream>

namespace glb {
	int vali;
	double vald;

	namespace lb {
		char ch;
		int vi;
	}
}

namespace very_long_namespace {
	int ll;
}

int main() {

	using namespace glb;	// using directive 
	
	vali = 10;
	vald = 40;
	glb::lb::ch = 'A';
	lb::vi = 11;

	// alias for namespace
	namespace vln = very_long_namespace;
	vln::ll = 5;



	// allow useing name variables without glb:: identifier
	std::cout << "Local variable vali = " << vali << std::endl;
	std::cout << "Local variable vald = " << vald << std::endl;
	std::cout << std::endl;

	// but in other hand allow useing name variables with glb:: identifier
	std::cout << "Local variable vali = " << glb::vali << std::endl;
	std::cout << "Local variable vald = " << glb::vald << std::endl;
	std::cout << std::endl;

	std::cout << "Variable ch = " << glb::lb::ch << std::endl;
	std::cout << "Variable vi = " << lb::vi << std::endl;
	std::cout << "Variable ll = " << vln::ll << std::endl;

	std::cin.get();

	return 0;
}
