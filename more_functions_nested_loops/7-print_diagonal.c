#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 *@n: test
 *
 */

void print_diagonal(int n)
{

	int d;
	int space;

	if (n > 0)

		for (d = 0 ; d < n ; d++)
		{
			for (space = 0 ; space < d ; space++)

				_putchar(' ');			
			_putchar('\\');

			_putchar('\n');
		}

	_putchar('\n');
}
