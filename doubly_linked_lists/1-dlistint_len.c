#include "lists.h"

/**
  * dlistint_len - return the number of elements
  * @h: The linked list
  *
  * Return: Number of elements
  */

size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		++lenght;
		h = h->next;
	}

	return (lenght);
}
