#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	cout << "Enter the delay time in seconds: ";
	float secs;
	cin >> secs;

	// CLOCKS_PER_SEC is a symbolic consrant of sys time per second
	clock_t delay = secs * CLOCKS_PER_SEC;
	
	// clock() get sys time from program's start
	clock_t time_start = clock();

	while(clock() - time_start < delay)
		;
	cout << "End of counting time.";
	cin.get();
	cin.get();
}
