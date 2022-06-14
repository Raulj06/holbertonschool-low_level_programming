#include "main.h"
#include<stdio.h> 
/**
 * print_array - prints n element
 *@arr: test
 *@n: test
 */

void print_array(int *arr, int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
