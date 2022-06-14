#include "main.h"

/**
 *_strcpy - copies the string pointed by src
 *@src: test
 *@dest: test
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{

	int n;
	int i;

	n = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		n++;
	}
	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
