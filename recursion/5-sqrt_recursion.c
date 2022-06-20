#include "main.h"

/**
 *_sqrt_find - find the square root
 *@n: test
 *@num: test
 *Return: the square root
 */

int _sqrt_find(int n, int num)
{
	if (num * num == n)
		return (num);

	if (num * num > n)
		return (-1);

	return (_sqrt_find(n, num + 1));
}


/**
 *_sqrt_recursion - returns the natural
 *@n: test
 *Return: square root
 */

int _sqrt_recursion(int n)
{

	int num = 0;

	if (num < 0)
		return (-1);

	if (num == 1)
		return (1);

	return (_sqrt_find(n, num));
}
