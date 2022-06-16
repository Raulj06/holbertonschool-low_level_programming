#include "main.h"

/**
 *_strspn - length of a prefix
 *@s: test
 *@accept: test
 *Return: lenght
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;
	int lenght_accept = 0;

	for (j = 0; accept[j] != '\0'; j++)
	{
		lenght_accept++;
	}
	lenght_accept = lenght_accept - 1;
	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				count++;
				break;
			}
			else if (i == lenght_accept)
			{
				return (count);
			}
		}
	}
	return (count);
}
