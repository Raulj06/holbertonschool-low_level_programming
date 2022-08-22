#include "hash_tables.h"

/**
 * hash_table_set - adds an element tot the hash table
 * @hash: the hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *hash, const char *key, const char *value)
{
	char *dup_value;
	unsigned long int index = 0;
	hash_node_t *new;

	if (strcmp(key, "") == 0)
		return (0);

	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	index = key_index((unsigned char *)key, hash->size);

	new->key = (char *)key;
	new->value = dup_value;

	if (hash->array[index] == NULL)
		new->next = NULL;
	else
		new->next = hash->array[index];

	hash->array[index] = new;

	return (1);
}
