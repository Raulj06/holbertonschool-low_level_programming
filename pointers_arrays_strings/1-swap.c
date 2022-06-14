#include "main.h"

/**
 *swap_int - swapts the values of two int
 *@a: test
 *@b:test
 */

void swap_int(int *a, int *b)
{

	int c = *a;

	*a = *b;
	*b = c;
}
