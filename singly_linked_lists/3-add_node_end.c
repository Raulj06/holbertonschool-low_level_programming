#include "lists.h"

/**
 * add_node_end -  nodes to link list
 * @head: address
 * @str: string
 *
 * Return: node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *hold = *head;

	if (str == NULL)
	{
		return (0);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (hold->next != NULL)
		hold = hold->next;

	hold->next = new;

	return (new);
}

/**
 * _strlen - lenght of string
 * @str: string
 *
 * Return: lenght
 */

int _strlen(const char *str)
{
	int i = 0;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
