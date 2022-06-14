#include "main.h"

/**
 *puts_half - prints half of a string
 *@str: test
 * Return: 0
*/

void puts_half(char *str)
{

	int n, i;

	for (n = 0; str[n] != '\0'; n++)
		i++;
	if ((n % 2) == 0)
	{
		for (i = n / 2; i < n; i++)
			_putchar(str[i]);
	}
	else if ((n % 2) != 0)
	{
		for (i = (n + 1) / 2; i < n; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
