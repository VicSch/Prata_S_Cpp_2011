#include <iostream>
#include "list.h"

int main() {

	List ls;

	ls.showList();
	double val = 10;
	ls.pop();

	for (int i = 0; i < SIZE; ++i)
		ls.add(val+10*i);
	ls.showList();

	ls.add(val);

	ls.pop();
	ls.showList();

	ls.visit(addTen);
	ls.showList();

	std::cin.get();
	return 0;
}