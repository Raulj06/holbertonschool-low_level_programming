#include "main.h"

/**
 * flip_bits - number of
 * @n: number
 * @m: number
 *
 * Return: number of bits you flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, set;

	set = n ^ m;

	while (set > 0)
	{
		if (set & 1)
			count++;
		set = set >> 1;
	}
	return (count);
}
