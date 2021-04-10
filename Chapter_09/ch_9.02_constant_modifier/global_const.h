#ifndef GLOBAL_CONST_H
#define GLOBAL_CONST_H

/* Whereas a global variable has external linkage by default, a const global variable has internal link-
age by default. But if you want to use in inside external files, use keyword 'extern' */

extern const int var1 = 20;		// static duration, internal linckage 
								// this variable is using inside file_01.cpp and
								// in function definition inside file_02.cpp

int func1(int);					// prototype of func1()

#endif // GLOBAL_CONST_H
