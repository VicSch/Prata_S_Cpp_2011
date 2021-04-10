#include <iostream>
using namespace std;

struct time_travel {int hour; int minutes;};

time_travel sum(time_travel t1, time_travel t2);
void show(time_travel tot);

const int min_p_hour = 60;

int main() {
	time_travel day1 {2, 45};
	time_travel day2 {3, 25};
	time_travel day3 {1, 37};

	time_travel total = sum(day1, day2);
	cout << "Two days trip:\n";
	show(total);

	total = sum(total, day3);
	cout << "Three days trip:\n";
	show(total);

	cin.get();
}

time_travel sum(time_travel t1, time_travel t2) {

	time_travel res;
	res.hour = t1.hour + t2.hour + (t1.minutes + t2.minutes) / min_p_hour;
	res.minutes = (t1.minutes + t2.minutes) % min_p_hour;
	return res;
}

void show(time_travel tot) {

	cout << "Total time travel is ";
	cout << tot.hour << " hours and ";
	cout << tot.minutes << " minutes.\n";
}