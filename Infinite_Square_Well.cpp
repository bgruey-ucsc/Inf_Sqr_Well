#include "headers.h"


/***********
 *
 * Problem taken from Computational Physics, 2nd Ed., Jos Thijssen
 *
 * 	Infinite Square Well, outlined beginning on page 29.
 *
 * 	Benjamin Gruey, 2016.
 */


// x is position
// n is order
// a is width
// x^n * (x m- a) * (x + a)
double basis(double x, double n, double a = 1) {

	return pow(x, n) * (x - a) * (x + a);

}


// integral[ basis(x, n, 1) * basis(x, m, 1), {x, -1, 1}]
// m is order of first basis function
// n is order of second
double basis_inner_prod(int m, int n) {

	if ( (n + m ) % 2 == 0) // if their sum is even:
		return 2.0 / (n + m + 5.0) - 4.0 / (n + m + 3) + 2.0 / (n + m + 1);

	else
		return 0.0;
}
