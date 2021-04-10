#include <iostream>
using namespace std;

int main() {
	
	// === pointer to variable === //

	// constant pointer to constant variable (VALID)
	const int val1 = 10;
	const int* pt1 = &val1;

	// constant pointer to non-constant variable (VALID)
	int val2 = 10;
	const int* pt2 = &val2;

	// non-constant pointer to constant variable (INVALID)
	// const int val3 = 10;
	// int* pt3 = &val3;

	// non-constant pointer to non-constant variable (VALID)
	int val4 = 10;
	int* pt4 = &val4;

	// === pointer to pointer === //

	// constant pointer to constant pointer (VALID)
	int val5 = 10;
	const int* pt5 = &val5;
	const int** pt6;
	pt6 = &pt5;

	// constant pointer to non-constant pointer (INVALID)
	// int val7 = 10;
	// int* pt7 = &val7;
	// const int** pt8;
	// pt8 = &pt7;

	// non-constant pointer to non-constant pointer (VALID)
	int val9 = 10;
	int* pt9 = &val9;
	int** pt10;
	pt10 = &pt9;

	// here *pt11 and pt12 are constant, pt11 and *pt12 are non-constant
	int val11 = 10;
	const int* pt11 = &val11;	// can change pointer's addres, can't change variable 
	int* const pt12 = &val11;	// can't change pointer's addres, can change variable 

	// here *pt13 and pt13 are constant
	int val13 = 10;
	const int* const pt13 = &val13;	// can't change pointer's addres, can't change variable 
}
