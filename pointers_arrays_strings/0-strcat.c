#include "main.h"

/**
 *_strcat - concatenates two strings
 *@src: test
 *@dest: test
 *Return: 0
 */

char *_strcat(char *dest, char *src)
{

	int n;
	int dest_lenght = 0;

	for (n = 0 ; dest[n] != '\0'; n++)
	{
		dest_lenght++;
	}
	for (n = 0 ; src[n] != '\0'; n++)
	{
		dest[dest_lenght + n] = src[n];
	}
	dest[dest_lenght] = '\0';
	return (dest);
}
