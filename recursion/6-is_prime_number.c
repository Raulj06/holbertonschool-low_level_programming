#include "main.h"

/**
 *prime_finder - prime number
 *@n: test
 *@num: test
 *Return: prime or not
 */

int prime_finder(int n, int num)
{

	if (n % num == 0)
		return (0);

	if (n / num < num)
		return (1);

	return (prime_finder(n, num + 1));
}

/**
 *is_prime_number - prime number
 *@n: test
 *Return: 1
 */

int is_prime_number(int n)
{
	int num = 2;

	if (n <= 1)
		return (0);

	return (prime_finder(n, num));
}
