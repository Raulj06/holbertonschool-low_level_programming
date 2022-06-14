include "main.h"

/**
 * _puts - print a string
 *
 *@str: test
 *
 * Return: 0
 */

void _puts(char *str)
{

	int n;

	for (n = 0; str[n] != '\0' ; n++)
		_putchar(str[n]);

	_putchar('\n');
}
