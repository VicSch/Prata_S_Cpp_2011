#include <iostream>
#include "averege.h"

int main() {

	using iav::averege;
	using dav::sum;

	int a = 3;
	int b = 6;
	std::cout << "Result of func average: " << averege(a, b) << std::endl;
	std::cout << "Result of func sum: " << sum(a, b) << std::endl;

	std::cin.get();

	return 0;
}

namespace iav {
	int averege(int a, int b) {
		return (a + b) / 2;
	}
}