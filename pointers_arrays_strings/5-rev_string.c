#include "main.h"


/**
 *rev_string - function that reverses a string
 *@s: test
 *
 */

void rev_string(char *s)
{

	int l;
	int n;
	char sub;

	for (l = 0; s[l] != '\0'; l++)
		;

	n = l - 1;
	{
		for (l = 0; l <= n; l++)
		{
			sub = s[l];
			s[l] = s[n];
			s[n] = sub;
			n--;
		}
	}
}
