#include <iostream>
#include "header.h"

int main() {

	Move coord1 {5, 2};
	coord1.showmove();

	Move offset {5, 8};
	offset.showmove();

	coord1 = coord1.add(offset);
	coord1.showmove();

	offset.reset();
	offset.showmove();

	std::cin.get();

	return 0;
}