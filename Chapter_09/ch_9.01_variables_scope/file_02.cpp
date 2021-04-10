#include <iostream>
using namespace std;

extern int var1;				// var1 from file_01.cpp (global variable)


int func1(int a) {
	static int b = 2;				// static duration, no linckage

	return a * b + var1;
}