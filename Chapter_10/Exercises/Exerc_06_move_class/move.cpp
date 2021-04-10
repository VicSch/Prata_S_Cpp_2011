#include <iostream>
#include "header.h"

Move::Move(double a, double b) {
	x = a; y = b;
}

Move::~Move() {}

void Move::showmove() const {

	std::cout << "X coordinat is - " << x << "; ";
	std::cout << "Y coordinat is - " << y << std::endl;
}

Move Move::add(const Move &m) const {

	Move temp = Move();
	temp.x = x + m.x; temp.y = y + m.y;
	return temp;
}

void Move::reset(double a, double b) {
	x = a; y = b;
}