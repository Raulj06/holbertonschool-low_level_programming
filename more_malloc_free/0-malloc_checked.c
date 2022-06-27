#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 *@b: test
 *Return: 0
 */

void *malloc_checked(unsigned int b)
{

	char *n;

	n = malloc(b);

	if (n == 0)
	{
		exit(98);
	}
	return (n);
}
