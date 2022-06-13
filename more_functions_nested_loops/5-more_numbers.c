#include "main.h"

/**
 *more_numbers - 10 times the numbers form - to 14
 *
 */

void more_numbers(void)
{

	int n, c;

	for (n = 0 ; n < 10 ; n++)
	{
		for (c = 0 ; c < 15 ; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + 48);
			}
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
	}
}
