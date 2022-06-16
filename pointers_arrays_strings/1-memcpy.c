#include "main.h"

/**
 *_memcpy - copie memory area
 *@dest: test
 *@src: test
 *@n: test
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
