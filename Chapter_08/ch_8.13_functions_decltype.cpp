#include <iostream>
using namespace std;

template <typename T1, typename T2>
void sum_T(T1 a, T2 b) {
	decltype(a+b) ab =  a + b;
}

// trailing return type C++11
template <typename T1, typename T2>
auto sum_T1(T1 a, T2 b) -> decltype(a+b) {
	return a + b;
}

int main() {

	int ii = 30;
	long ll = 4;
	sum_T(ii, ll);

	cout << sum_T1(ii, ll);
	cin.get();

	/* стр. 421

	Fase #1
	double x = 5.5;
	double у = 7.9;
	double &rx = x;
	const double * pd;
	decltype(x) w;				// w имеет тип double
	decltype (rx) u = y;		// u имеет тип double &
	decltype(pd) v;				// v имеет тип const double *

	Fase #2
	long indeed(int);			// function
	decltype (indeed (3)) m;	// m имеет тип long

	Fase #3
	double хх = 4.4;
	decltype ( (хх) ) г2 = хх;	// г2 имеет тип double &
	decltype (хх) w = хх;		// w имеет тип double (соответствие на фазе 1)

	Fase #4
	int j = 3;
	int &k = j
	int &n = j ;
	decltype (j + 6) i1;		// i1 имеет тип int
	decltype(100L) i2;			// i2 имеет тип long
	decltype (k+n) i3;			// i3 имеет тип int;
	*/
}