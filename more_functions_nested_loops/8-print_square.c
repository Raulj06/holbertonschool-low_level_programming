#include "main.h"

/**
 * print_square - print a square
 *@size: test
 */

void print_square(int size)
{

	int wide;
	int l;

	if (size > 0)
	{
		for (l = 0 ; l < size ; l++)
		{

			for (wide = 0 ; wide < size ; wide++)

				_putchar('#');
			_putchar('\n');
		}

	}	
	else
			_putchar('\n');
	
}
