#include <iostream>
#include "header.h"

int main() {

	Plorg g1 = Plorg();
	char name1[SIZE] = "Huracan";
	Plorg g2(name1);
	g1.show();
	g2.show();

	char name2[SIZE] = "Puppet";
	g1.setName(name2);
	g1.setCi(80);
	g1.show();

	g2.setCi(-30);
	g2.show();

	std::cin.get();
	return 0;
}