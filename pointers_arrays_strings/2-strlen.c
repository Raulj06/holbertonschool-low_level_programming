#include "main.h"

/**
 *_strlen - return the length of a string
 *@s: test
 *Return: n
 */

int _strlen(char *s)
{

	int n;

	for (n = 0; s[n] != '\0'; n++)
	;
		return (n);
}
