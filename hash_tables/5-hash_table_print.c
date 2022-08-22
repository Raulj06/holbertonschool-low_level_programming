#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @hash: the hash table
 */
void hash_table_print(const hash_table_t *hash)
{
	unsigned long int index;
	int flag = 0;
	hash_node_t *current_node;

	if (hash == NULL)
		return;

	printf("{");
	for (index = 0; index < hash->size; index++)
	{
		current_node = hash->array[index];
		while (current_node != NULL)
		{
			if (flag == 0)
			{
				printf("\'%s\': \'%s\'", current_node->key, current_node->value);
				flag = 1;
			}
			else
			{
				printf(", \'%s\': \'%s\'", current_node->key, current_node->value);
			}
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
