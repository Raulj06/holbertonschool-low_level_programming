#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @hash: the hash table
 */
void hash_table_delete(hash_table_t *hash)
{
	unsigned long int index;
	hash_node_t *node, *temp_node;

	if (hash == NULL)
		return;


	for (index = 0; index < hash->size; index++)
	{
		if (hash->array[index] != NULL)
		{
			node = hash->array[index];
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
	free(hash->array);
	free(hash);
}
