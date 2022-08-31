#include "search_algos.h"

/**
 * print_array - prints the element
 * @array: the array
 * @first: first
 * @l: last element
 */
void print_array(int *array, int first, int l)
{
	int i;

	if (first <= l)
	{
		printf("Searching in array: %d", array[first]);
		for (i = first + 1; i <= last; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
	}
}
/**
 * binary_search - searches for the value with binary search
 * @array: array
 * @size: size
 * @value: value to find
 *
 * Return: the index of the value
 */

int binary_search(int *array, size_t size, int value)
{
	int first = 0, l = size - 1, m = 0;

	if (array != NULL)
	{
		print_array(array, first, l);
		while (first <= l)
		{
			m = (first + l) / 2;
			if (array[m] < value)
			{
				first = m + 1;
				print_array(array, first, l);
			}
			else if (array[m] > value)
			{
				l = m - 1;
				print_array(array, first, l);
			}
			else
			{
				return (m);
			}
		}
	}
	return (-1);
}
