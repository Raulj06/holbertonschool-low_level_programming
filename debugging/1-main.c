#include <stdio.h>
/**
 * main - cause infinite loop, infinite loop avoided
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	/**
	 * whie (i < 10)
	 * {
	 * putchar (i);
	 * }
	 */
	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
