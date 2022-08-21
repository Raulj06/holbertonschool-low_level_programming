#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash = NULL;

	if (size == 0)
		return (NULL);

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->array = malloc(sizeof(void *) * size);
	if (ht->array == NULL)
		return (NULL);

	hash->size = size;

	for (i = 0; i < size; i++)
	{
		hash->array[i] = NULL;
	}

	return (hash);
}
