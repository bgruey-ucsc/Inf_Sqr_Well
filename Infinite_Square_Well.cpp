#include "headers.h"



// x is position
// n is order
// a is width
// x^n * (x m- a) * (x + a)
double basis(double x, double n, double a = 1) {
	return pow(x, n) * (x - a) * (x + a);
}


