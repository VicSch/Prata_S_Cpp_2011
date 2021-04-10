#include <iostream>
using namespace std;

int main() {

	cout << "Enter number: ";
	int num;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int a = i+1;
		while((num - a) != 0) {
		    cout << ".";
		    a++;
		}

		int b = num - (i+1);
		while((num - b) != 0) {
		    cout << "*";
		    b++;
		}

		cout << endl;
	}

	cin.get();
	cin.get();
}
