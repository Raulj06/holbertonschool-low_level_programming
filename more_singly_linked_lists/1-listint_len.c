#include "lists.h"

/**
  * listint_len - returns the number of elements in a linked list
  * @h: first element of the list
  *
  * Return: number of nodes
  */
size_t listint_len(const listint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}

	return (node);
}
