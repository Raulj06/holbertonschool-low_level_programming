#include <stdio.h>
/**
 * main - prints 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{

	unsigned long fib1 = 1, fib2 = 2, fib3, num, count = 0;

	num = 52;

	printf("%lu, ", fib1);

	printf("%lu, ", fib2);

	count = 4;

	while (count < num)

	{
		fib3 = fib1 + fib2;

		count++;

		printf("%lu", fib3);

		fib1 = fib2;

		fib2 = fib3;
		if (count != 52)
			printf(", ");
	}
	printf("\n");
	return (0);
}
