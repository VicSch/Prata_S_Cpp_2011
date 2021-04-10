#include <iostream>
using namespace std;

const int SIZE = 65;

void recurs(char line[], int min, int max, int level);

int main() {
	
	char line[SIZE+1];

	for (int i = 0; i < SIZE; ++i)
		line[i] = ' ';
	line[SIZE] = '\0';

	int min = 0;
	int max = SIZE-1;
	int level = 6;
	line[min] = line[max] = '|';
	cout << line << endl;

	for (int i = 1; i <= level; i++) {
		recurs(line, min, max, i);
		cout << line << endl;

		for (int j = 1; j < SIZE-1; j++)
			line[j] = ' ';
	}

	cin.get();

}

void recurs(char line[], int min, int max, int level) {

	if(level == 0)
		return;

	int mid = (max + min) / 2;
	line[mid] = '|';

	recurs(line, min, mid, level-1);
	recurs(line, mid, max, level-1);
}