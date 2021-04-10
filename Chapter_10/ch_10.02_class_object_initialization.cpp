// do not compaile this code
// it for demonstration purpose only
#include <iostream>

int main() {

	// this is a class
	Simple(stirng name, int age, int experience);

	// objects initialization
	Simple obj1("Tom", 28, 3);

	Simple obj2 = Simple("Mick", 30, 5);

	// if you have declared constructor by default in this class
	Simple obj3;
	Simple obj3 = Simpe();
	Simple *ptobj3 = new Simple();
	Simple *ptobj3 = new Simple;

	// object assignment
	obj3 = obj1;
	obj3 = Simple("Bill", 33, 8);

	// new for dynamic memory allocation for object
	Simple *ptobj4 = new Simple("Tim", 21, 1);

	/* The output points out that there is a fundamental difference between the following
two statements:

	Simple obj2 = Simple("Mick", 30, 5);
	obj3 = Simple("Bill", 33, 8); // temporary object

	The first of these statements invokes initialization; it creates an object with the indi-
cated value, and it may or may not create a temporary object.The second statement
invokes assignment. Using a constructor in an assignment statement in this fashion always
causes the creation of a temporary object before assignment occurs.
	If you can set object values either through initialization or by assignment, choose initializa-
tion. It is usually more efficient. */

	// C++11 list initialization
	Simple obj1 {"Tom", 28, 3};
	Simple obj2 = Simple{"Mick", 30, 5};
	Simple obj3 {};
	Simple *ptobj4 = new Simple {"Tim", 21, 1};

	/* If a constructor has just one argument, that constructor is invoked if you initialize an
object to a value that has the same type as the constructor argument. For example, sup-
pose you have this constructor prototype:

	Bozo(int age);

Then you can use any of the following forms to initialize an object:

Bozo dribble = bozo(44);	// primary form
Bozo roon(66);				// secondary form
Bozo tubby = 32;			// special form for one-argument constructors

	Actually, the third example is a new point, not a review point, but it seemed like a nice
time to tell you about it. Chapter 11 mentions a way to turn off this feature because it can
lead to unpleasant surprises. */


	cin.get();

	return 0;
}
