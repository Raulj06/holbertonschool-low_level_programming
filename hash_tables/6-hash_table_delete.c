#include "hash_tables.h"

/**
 * free_link_list - free linked list in hash table
 * @head: beginning of linked list
 * Return: none
 */

void free_link_list(hash_node_t *head)
{
	hash_node_t *pop_candidate;
	hash_node_t *change_node;

	pop_candidate = head;
	while (pop_candidate)
	{
		change_node = pop_candidate->next;
		free(pop_candidate->value);
		free(pop_candidate->key);
		free(pop_candidate);
		pop_candidate = change_node;
	}
}

/**
 * hash_table_delete - free hash table
 * @hash: hash table to be freed
 * Return: none
 */
void hash_table_delete(hash_table_t *hash)
{
	size_t idx = 0;

	while (idx < hash->size)
	{
		free_link_list(hash->array[idx]);
		idx++;
	}
	free(hash->array);
	free(hash);
}
