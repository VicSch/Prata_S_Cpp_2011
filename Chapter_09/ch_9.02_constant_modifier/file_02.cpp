#include <iostream>
// #include "global_const.h"	// prototype func1() must be in file where this function is colled
								// not here where function is defined
								// global var1 must defined one time (in this case in file_01.cpp)
using namespace std;

extern int var1;				// var1 from file_01.cpp (global variable)


int func1(int a) {
	static int b = 2;				// static duration, no linckage

	return a * b + var1;
}