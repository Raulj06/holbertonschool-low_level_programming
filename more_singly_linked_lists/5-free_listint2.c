#include "lists.h"

/**
  * free_listint2 - Frees  linked list
  * @head: head
  *
  * Return: 0
  */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		hold = *head;
		*head = (*head)->next;
		free(hold);
	}

	free(*head);
	head = NULL;
}
