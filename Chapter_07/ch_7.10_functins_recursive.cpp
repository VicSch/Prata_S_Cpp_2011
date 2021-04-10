#include <iostream>
using namespace std;

/* SIZE must be power level of 2, i.e.
 level = 6, so SIZE = 2*2*2*2*2*2+1 */
 const int SIZE = 65;

void recurs(char line[], int min, int max, int level);

int main() {
	
	char line[SIZE+1];

	for (int i = 1; i < SIZE; ++i)
		line[i] = ' ';
	line[SIZE+1] = '\0';
	line[0] = line[SIZE-1] = '|';
	cout << line << endl;

	int min = 0;
	int max = SIZE-1;
	int level = 6;		// see to SIZE definition

	recurs(line, min, max, level);

	cin.get();

}

void recurs(char line[], int min, int max, int level) {

	int mid = max / 2;

	if(level != 0) {
		for (int i = 1; i < SIZE-1; ++i)
			if((i % mid) == 0)
				line[i] = '|';

		cout << line << endl;
		for (int j = 1; j < SIZE-1; ++j)
			line[j] = ' ';

		max = mid;
		recurs(line, min, max, level-1);
	}	
}