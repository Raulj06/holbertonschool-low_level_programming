#include "main.h"

/**
 *_strpbrk - searches a string
 *@s: test
 *@accept: test
 *Return: bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for ( ; *s; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return ('\0');
}
