#include"main.h"
/**
 * print_alphabet - print alphabet in lowercase
 * Return: no return value
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a' ; n <= 'z'; n=n+1)
	{
		_putchar(n);

	}
	
	_putchar('\n');
}
