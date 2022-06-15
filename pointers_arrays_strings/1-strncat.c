#include "main.h"

/**
 *_strncat - concatenates two strings
 *@src: test
 *@dest: test
 *@n: test
 *Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int dest_lenght = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_lenght++;
	}
	for (i = 0; src[i] && i < n; i++)
		dest[dest_lenght++] = src[i];

	return (dest);
}
