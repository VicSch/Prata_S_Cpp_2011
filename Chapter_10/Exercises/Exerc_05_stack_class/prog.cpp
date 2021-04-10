#include <iostream>
// #include <cstring>
// #include <cctype>
#include "header.h"

using namespace std;


int main() {

	customer cust1 = {"Tom", 1000};
	customer cust2 = {"Ben", 3000};
	customer cust3 = {"Mick", 2000};
	customer cust4 = {"Sid", 1500};

	Stack st;

	st.pop();
	st.add(cust1);
	st.add(cust2);
	st.add(cust3);
	st.add(cust4);
	st.pop();
	st.add(cust4);

	st.pop();
	st.pop();
	st.pop();
	st.pop();

	cin.get();

	return 0;
}
