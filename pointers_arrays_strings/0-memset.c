#include "main.h"

/**
 *_memset - memory constant
 *@s: test
 *@b: test
 *@n:test
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
