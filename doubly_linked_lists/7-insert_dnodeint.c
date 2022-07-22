#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node
  * @h: the first element
  * @idx: the index of the list
  * @n: value
  *
  * Return: the address of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *new;
	dlistint_t *tmp = *h;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (tmp != NULL)
	{
		if (index == idx - 1)
		{
			new->next = tmp->next;
			new->next->prev = new;
			new->prev = tmp;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		index++;
		if (index > idx)
			return (NULL);
	}

	return (NULL);
}
