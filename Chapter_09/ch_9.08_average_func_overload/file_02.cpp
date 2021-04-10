#include "averege.h"

namespace dav 
{
	double averege(int a, int b) {
		return (double(a) + double(b)) / 2.0;
	}

	double sum(int a, int b) {
		return dav::averege(a, b) * 3.0;
	}
}