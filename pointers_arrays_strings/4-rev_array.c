#include "main.h"

/**
 *reverse_array - reverse the content
 *@a: test
 *@n: test
 *Return : 0
 */

void reverse_array(int *a, int n)
{

	int i;
	int b;

	n--;

	for (i = 0; i <= n; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		n--;
	}
}
