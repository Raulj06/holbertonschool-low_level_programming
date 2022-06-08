#include "main.h"

/**
 * main - prints 10 times the alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void);
{

	char lowercase;
	int n;

	for (n = '0'; n <= '9'; n++)
	{

		for (lowercase = '97' ; lowercase <= '122' ; lowercase++)
		{

			_putchar(lowercase);
		}
		_putchar('\n');
	}
}
