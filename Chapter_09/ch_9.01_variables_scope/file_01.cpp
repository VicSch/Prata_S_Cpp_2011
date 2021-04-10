#include <iostream>
using namespace std;

int func1(int);				// prototype of func()

int var1 = 20;				// static duration, external linckage
							// this variable is using in function definition
							// iside file_02.cpp

static int var2 = 30;		// static duration, internal linckage

int main() {

	cout << "result is: " << func1(var2);
	cin.get();

	return 0;
}
