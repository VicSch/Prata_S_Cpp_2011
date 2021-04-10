#include <iostream>

using namespace std;

int main()
{
	int max_num;
	cout << "Enter maximum number for factorial: ";
	cin >> max_num;
	int fact[max_num+1];
	fact[1] = fact[0] = 1;
	for (int i = 2; i <= max_num; ++i)
	{
		fact[i] = fact[i-1] * i;
	}

	for (int j = 0; j <= max_num; j++)
	{
		cout << fact[j] << ", ";
	}

	// cout << fact;
	cin.get();
	cin.get();
	return 0;
}
		