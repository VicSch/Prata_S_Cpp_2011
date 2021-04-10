/* It is an error to try to use both an explicit instantiation
and an explicit specialization for the same type(s) in the same file,
or, more generally, the same translation unit. */

#include <iostream>
using namespace std;

struct job {char name[10]; double salary; int experience;};
	
template <typename T>		// old definition <class T>
void swap_T(T&, T&);

// explicit spesialization fot the jop type
template <> void swap_T<job>(job& a, job& b);

// template function prototype
template <typename T>
void swap_T(T* a, T* b, int n);

// non template overload function prototype
void show(const job& a);
void show(int a[]);

// template for demonstration explicit instantiation (96)
template <typename T>
T add_T(T, T);

const int SIZE = 10;

int main() {

	// this working template function for int
	int a = 4;
	int b = 40;
	cout << "Initial value of int a - " << a << endl;
	cout << "Initial value of int b - " << b << endl;
	cout << endl;

	swap_T(a, b);

	cout << "Value of int a after function swap_T()- " << a << endl;
	cout << "Value of int b after function swap_T()- " << b << endl;

	// this working template function for float
	float c = 3.25;
	float d = 5.27;
	cout << "Initial value of int c - " << c << endl;
	cout << "Initial value of int d - " << d << endl;
	cout << endl;

	swap_T(c, d);

	cout << "Value of int c after function swap_T()- " << c << endl;
	cout << "Value of int d after function swap_T()- " << d << endl;
	cout << endl;

	// this working template function for array
	int a1[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int a2[SIZE] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	cout << "Array a1 before function swap_T()\n";
	show(a1);
	cout << "Array a2 before function swap_T()\n";
	show(a2);

	cout << endl;
	cout << "Array a1 after function swap_T()\n";
	show(a1);
	cout << "Array a2 after function swap_T()\n";
	show(a2);

	// this working explicit spesialized function for suructure

	job s1 = {"Jhon", 20300.50, 4};
	job s2 = {"Sam", 15800.50, 6};

	cout << endl;
	cout << "Structure s1 before function swap()\n";
	show(s1);
	cout << "Structure s2 before function swap()\n";
	show(s2);

	swap_T(s1, s2);

	cout << endl;
	cout << "Structure s1 function swap_()\n";
	show(s1);
	cout << "Structure s2 after function swap_()\n";
	show(s2);

	// explicit instantiation
	cout << endl;
	int ii = 11;
	double dd = 43.84;
	// syntax calling explicit instantaition function form 
	cout << add_T<double>(ii, dd) << endl;
	cout << add_T<char>(ii, dd) << endl;	// char 11 + char 43 = char 54
											// char 54 = literal '6'
	cout << add_T<double>(ii, dd) << endl;

	int aa = 66;cout << add_T<double>(ii, dd) << endl;
	// syntax calling template function form 
	cout << add_T<>(ii, aa) << endl;

	cin.get();


	return 0;
}
// swap value
template <typename T>		// old definition <class T>
void swap_T(T& a, T& b) {

	T t = a;				// variable t type T
	a = b;
	b = t;
}
// swap integer arrays
template <typename T>
void swap_T(T* a, T* b, int n) {

	T temp[n];
	for (int i = 0; i < n; ++i) {
		temp[i] = a[i];
		a[i] = b[i];
		b[i] = temp[i];
	}
}
// print array
void show(int a[]) {

	for (int i = 0; i < SIZE; ++i)
		cout << a[i];
	cout << endl;
}

// swap salary field of structure job
template <> void swap_T<job>(job& a, job& b) {
	double temp = a.salary;
	a.salary = b.salary;
	b.salary = temp;
}
// print structure
void show(const job& a) {
	cout << a.name << "; ";
	cout << a.salary << "; ";
	cout << a.experience << ";\n";
}

template <typename T>
T add_T(T a, T b) {
	return a + b;
}
