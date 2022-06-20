#include "main.h"

/**
 *_strlen_recursion - return length of a string
 *@s: test
 *Return: n
 */

int _strlen_recursion(char *s)
{

	int n = 0;

	if (*S)
	{
		n++;
		n += _strlen_recusion(s + 1);
	}
	return (n);
}
