#include "hash_tables.h"

/**
 * key_index - Gets the index of a key
 * @key: string key
 * @size: is the size of the array
 *
 * Return: key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int new_key = 0;

	new_key = (hash_djb2(key) % size);
	return (new_key);
}
