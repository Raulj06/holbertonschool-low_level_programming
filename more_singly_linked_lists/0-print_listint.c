#include "lists.h"

/**
 * print_listint - Prints all the nodes
 * @h: linked list
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
