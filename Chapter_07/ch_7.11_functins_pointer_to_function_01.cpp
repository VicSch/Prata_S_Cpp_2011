#include <iostream>
using namespace std;

/*
// adress of function is a function name without brackets with arguments
double somefun(int intarg);				// prototype for function
somefun;								// function's addres (just name)

// declare pointer to function
double (*pf)(int);						// pointer to function 'somefun' that takes one
										// int argument and that returns type double

pf = somefun;							// assign pointer to function's addres

// function's prototype that pass pointer to 'somefun' functon as argument
void secondfun(int num, double (*pf)(int));

// colling this functon
secondfun(50, somefun);

// we can call 'somefun' now three ways
double x = somefun(10);
double y = (*pf)(8);
double z = pf(12);

*/

int main() {
	int a = 10;
}
