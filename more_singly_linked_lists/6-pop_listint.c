#include "lists.h"

/**
  * pop_listint - deletes the head
  * @head: a pointer to the first element
  *
  * Return: the head node
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int num = 0;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	num = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (num);
}
