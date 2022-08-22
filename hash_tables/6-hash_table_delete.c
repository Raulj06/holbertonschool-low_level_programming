#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *temp_node;

	if (ht == NULL)
		return;


	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			node = ht->array[index];
			while (node != NULL)
			{
				temp_node = node->next;
				free(node->value);
				free(node->key);
				free(node);
				node = temp_node;
			}
		}
	}
	free(ht->array);
	free(ht);
}
