// do not compaile this code
// it for demonstration purpose only
#include <iostream>

int main() {

	// this won’t work because declaring a class describes
	// what an object looks like but doesn’t create an object
	class Simple
	{
		private:
		const int Months = 12;	// declare a constant? FAILS
		double costs[Months];
		...

	// First, you can declare an enumeration within a class. An enumeration given in a class
	// declaration has class scope, so you can use enumerations to provide class scope symbolic
	// names for integer constants.
	class Simple
	{
		private:
		enum {Months = 12};
		double costs[Months];
		...

	// a second way of defining a constant within a class—using the keyword static
	// This creates a single constant called Months that is stored with other static variables
	// rather than in an object. Thus, there is only one Months constant shared by all Simple objects
	class Simple
	{
		private:
		static const int Months = 12;
		double costs[Months];
		...

	// C++11 provides a new form of enumeration that avoids conflict two enumeration
	// with the same definitions by having class scope for its enumerators.
	enum class egg {Small, Medium, Large, Jumbo};
	enum class t_shirt {Small, Medium, Large, Xlarge};

	/* Alternatively, you can use the keyword 'struct' instead of 'class'. In either case, you
	now need to use the enum name to qualify the enumerator */

	// Now that the enumerators have class scope, enumerators from different enum definitions
	// no longer have potential name conflicts
	egg choice = egg::Large;			// the Large enumerator of the egg enum
	t_shirt Floyd = t_shirt::Large; 	// the Large enumerator of the t_shirt enum

	/* Regular enumerations get converted to integer types automatically in some situations,
	such as assignment to an int variable or being used in a comparison expression, but scoped
	enumerations have no implicit conversions to integer types */
	enum egg_old {Small, Medium, Large, Jumbo};				// unscoped
	enum class t_shirt {Small, Medium, Large, Xlarge}; 		// scoped
	egg_old one = Medium;									// unscoped
	t_shirt rolf = t_shirt::Large;							// scoped

	int king = one;						// implicit type conversion for unscoped
	int ring = rolf;					// not allowed, no implicit type conversion;
	(
	if(king < Jumbo)					// allowed
		std::cout << "Jumbo converted to int before comparison.\n";
	if(king < t_shirt::Medium)			// not allowed
		std::cout << "Not allowed: < not defined for scoped enum.\n";

	// But you can do an explicit type conversion if you feel you have to:
	int Frodo = int(t_shirt::Small);	// Frodo set to 0

	/*	Enumerations are represented by some underlying integer type, and under C98 that
	choice was implementation-dependent.Thus, a structure containing an enumeration
	might be of different sizes on different systems. C++11 removes that dependency for
	scoped enumerations. By default, the underlying type for C++11 scoped enumerations is
	int . Furthermore, there’s a syntax for indicating a different choice: */
	
	// underlying type for pizza is short
	enum class : short pizza {Small, Medium, Large, XLarge};

	// this is a class
	Simple(stirng name, int age, int experience);




	cin.get();

	return 0;
}
