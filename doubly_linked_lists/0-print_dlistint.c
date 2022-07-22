#include "lists.h"

/**
 * print_dlistint - Prints all the elements
 * @h: The double linked list
 *
 * Return: nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length;
		h = h->next;
	}

	return (length);
}
