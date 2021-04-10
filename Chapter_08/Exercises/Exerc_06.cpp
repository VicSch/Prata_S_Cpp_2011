#include <iostream>
#include <cstring>
using namespace std;

template <class T>
const T* maxn(const T*, int);

template <> const char* maxn(const char*, int);

int main() {

	const int int_arr[6] {-5, 8, -20, 22, 50, 10};
	const double dou_arr[4] {44.4, -123.5, 456.78, 21.9};

	cout << "int_arr max = " << *(maxn(int_arr, 6)) << endl;
	cout << "dou_arr max = " << *(maxn(dou_arr, 4)) << endl;
	cout << endl;

	const char* ch_arr[5] {"aaa", "bb", "ccccccccc", "ddddddd", "eeeee"};
	const char* t = maxn(ch_arr[0], 5);
	cout << "ch_arr max = " << t << endl;

	cin.get();
}

template <class T>
const T* maxn(const T* arr, int num) {

	int max, i;
	max = 0;
	const T* max_elm = arr;			// addres of first elem of array

	for (i = 0; i < num; i++) {

		if(arr[i] > *max_elm) {
			max = i;
			max_elm = arr+i;
		}
	}
	return arr+max;
}

template <> const char* maxn(const char* ch, int num) {

	const char* maxstr = ch;
	int max, i, count;
	max = count = 0;

	for (i = 0; i < num; ++i) {
		const char* line = ch+count;
		int l = strlen(ch+count)+1;

		if(strlen(line) > strlen(maxstr)) {
			max = count;
			maxstr = ch+count;
		}
		count += l;
		cout << count << endl;
	}
	return ch+max;
}