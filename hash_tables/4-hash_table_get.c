#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @hash: hash table from which to retrieve
 * @key: key of the value to retrieve
 *
 * Return: the value associated with the key, or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *hash, const char *key)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	if (!hash || !key)
		return (NULL);

	index = key_index((const unsigned char *) key, hash->size);

	temp = hash->array[index];

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
