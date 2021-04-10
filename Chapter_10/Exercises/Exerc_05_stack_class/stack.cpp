#include <iostream>
#include <cstring>
#include "header.h"

// constructor
Stack::Stack() {

	customer empty_cust = {"Not defined", 0.0};

	for (int i = 0; i < SIZE; ++i)
		custArr[i] = empty_cust;

	top = 0;
};

// Stack::Stack(customer custArr_[SIZE]) {

// 	custArr = custArr_;
// }

// destructor
Stack::~Stack() {};

void Stack::updateTop() {

	top_sum = custArr[top-1].payment;
	strcpy(top_name, custArr[top-1].fullname);
}

void Stack::show() const {

	std::cout << top_name << " - " << top_sum;
	std::cout << "." << std::endl;
}

void Stack::add(customer c) {
	
	if(top >= SIZE)
		std::cout << "Stack is full.\n";
	else {
		custArr[top++] = c;
		updateTop();
	}
}

void Stack::pop() {

	if(top <= 0)
		std::cout << "Stack is empty.\n";
	else {
		show();
		top--;
		updateTop();
	}
}	