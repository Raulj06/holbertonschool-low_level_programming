#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 *main - adds positive numbers
 *@argc: test
 *@argv: test
 *Return: 0
 */

int main(int argc, char *argv[])
{

	int a;
	int b = 0;
	int c = 0;
	int n;
	char *str;

	for (a = 1 ; a < argc; a++)
	{
		str = argv[a];

		for (n = 0; str[n] != '\0'; n++)
		{
			c = isdigit(str[n]);

			if (c == 0)
			{
				printf("Error\n");
				return (0);
			}
		}
		b += atoi(str);
	}
	printf("%d\n", b);

	return (0);
}
