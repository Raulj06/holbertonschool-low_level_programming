#include<stdio.h>
/**
 * main - alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	for(int x = 'A'; x <= 'Z'; x++)
	{
	 x = tolower(x);
	 putchar(x);
}
	return(0);
}

