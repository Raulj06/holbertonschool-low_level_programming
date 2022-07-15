#include "lists.h"

/**
 * print_list - Prints the nodes
 * @h: the list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			node++;
		}

		else
		{
			printf("[%i] %s\n", h->len, h->str);
			node++;
		}

		h = h->next;
	}

	return (node);
}
