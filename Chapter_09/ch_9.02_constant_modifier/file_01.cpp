#include <iostream>
#include "global_const.h"
using namespace std;

/* Whereas a global variable has external linkage by default, a const global variable has internal link-
age by default. */
const extern int var1;		// static duration, with const modifier internal linckage 

static int var2 = 30;		// static duration, internal linckage

int main() {

	cout << "const int var1: " << var1 << " has no conflicts ";
	cout << "with gloaba var1 from global_const.h\n";
	cout << "result is: " << func1(var2);
	cin.get();

	return 0;
}
