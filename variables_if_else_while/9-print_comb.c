#include<stdio.h>

/**
 * main - prints all possible combinations
 * Return: 0
 */

int main(void)
{

	int a;

	for (a = '0'; a <= '9' ; a++)
	{
		putchar(a);
		if (a <= '8')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
