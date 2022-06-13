#include "main.h"

/**
 * print_triangle - prints a triangle
 *@size: test
 *
 */

void print_triangle(int size)
{

	int s, n;

	if (size <= 0)

		_putchar('\n');

	for (s = 1 ; s <= size ; s++)
	{
		for (n = 1 ; n <= size ; n++)
		{
			if (n <= (size - s))
				_putchar(' ');

			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
