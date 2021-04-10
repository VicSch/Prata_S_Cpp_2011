#include <iostream>
using namespace std;

int fill(int arr[], int num);
void show(const int* arr, int num);
double avrg(const int* arr, int num);

int main() {
	
	const int SIZE = 4;
	int arr[SIZE];
	int* pt;
	pt = arr;
	int f = fill(pt, SIZE);

	if(f){
		show(pt, f);
		cout << "Average result: " << avrg(pt, f);
		cin.get();
	}
	else
		cout << "Exit programm.";

	cin.get();
}

int fill(int arr[], int num) {
	
	int score;
	int idx = 0;
	cout << "Enter results of games:\n";

	while(idx < num) {

		cout << "Enter next game #" << idx+1 << " (\'q\' to quit or 0 to stop): ";
		cin >> score ;

		if(cin) {
			
			if(score == 0)
				break;		// stop fill array
			else {
				arr[idx] = score;
			    ++idx;
			}
		}
		else {
			cin.clear();
			while(cin.get() != '\n')
				continue;
			return 0;
		}
	}
	
	return idx;
}

void show(const int* arr, int num) {
	
	for (int i = 0; i < num; ++i) {

		cout << "Score of game #" << i+1;
		cout << ": " << arr[i] << endl;
	}
}

double avrg(const int* arr, int num) {
	
	int sum = 0;
	for (int i = 0; i < num; ++i)
		sum += arr[i];
	return double(sum) / num;
}
