#include<stdio.h>

/**
 * main - print numbers of base 16 lowercase
 * Return: 0
*/

int main(void)
{

	char n;
	int b;

	for (n = "0" ; n < "9" ; n++)
	putchar(n);

	for (b = "a" ; b < "f" ; b++)
	putchar(b);

	putchar('\n');

	return (0);
}
