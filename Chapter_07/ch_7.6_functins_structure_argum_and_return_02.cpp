/* Programm take two values: coordinate by x and y axis,
then convert them to polar coordinats and show output as
distance and angel in degreas */

#include <iostream>
#include <cmath>

using namespace std;

struct rect {double x; double y;};
struct polar {double dist; double angle;};

polar rect_to_polar(rect rcoord);
void show_polar(polar pcoord);

int main() {
	
	rect rc;
	polar pc;

	cout << "Enter x and y value: ";
	while(cin >> rc.x >> rc.y) {
	    
	    pc = rect_to_polar(rc);
	    show_polar(pc);
	    cout << "Enter x and y value (\'q\' to quit): ";
	}

	cout << "Done.";
	cin.get();
	cin.get();
}

polar rect_to_polar(rect rcoord) {
	
	polar res;
	res.dist = sqrt(rcoord.x * rcoord.x + rcoord.y * rcoord.y);
	res.angle = atan2(rcoord.y, rcoord.x);

	return res;
}

void show_polar(polar pcoord) {

	const double deg_per_rad = 57.29577951;

	cout << "Distance = " << pcoord.dist << ": ";
	cout << "Angle = " << pcoord.angle * deg_per_rad << ":\n";
}
