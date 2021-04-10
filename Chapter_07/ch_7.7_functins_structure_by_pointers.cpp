/* Programm take two values: coordinate by x and y axis,
then convert them to polar coordinats and show output as
distance and angel in degreas */

#include <iostream>
#include <cmath>

using namespace std;

struct rect {double x; double y;};
struct polar {double dist; double angle;};

void rect_to_polar(const rect* rcoord, polar* pcoord);
void show_polar(const polar* pcoord);

int main() {
	
	rect rc;
	polar pc;

	cout << "Enter x and y value: ";
	while(cin >> rc.x >> rc.y) {
	    
	    rect_to_polar(&rc, &pc);
	    show_polar(&pc);
	    cout << "Enter x and y value (\'q\' to quit): ";
	}
}

/* Pass two pointers to the function
The first points to the structure to be converted, and the second points
to the structure that’s to hold the conversion. Instead of returning a new structure, the
function modifies an existing structure in the calling function. Hence, although the first
argument is const pointer, the second is not const. */
void rect_to_polar(const rect* rcoord, polar* pcoord) {
	
	pcoord->dist = sqrt(rcoord->x * rcoord->x + rcoord->y * rcoord->y);
	pcoord->angle = atan2(rcoord->y, rcoord->x);
}

/* When calling the function, pass it the address of the structure rather than
the structure itself. Declare the formal parameter to be a pointer to polar.
Because the function shouldn’t modify the structure, use the const modifier.
Because the formal parameter is a pointer instead of a structure, use the indirect
membership operator ( -> ) rather than the membership operator (dot). */
void show_polar(const polar* pcoord) {

	const double deg_per_rad = 57.29577951;

	cout << "Distance = " << pcoord->dist << "; ";
	cout << "Angle = " << pcoord->angle * deg_per_rad << ";\n";
}
