#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @size: Size of the array of the hash table.
 * @key: the key.
 * Return:  Index at which the key/value pair should be stored
 * in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index = 0;

	if (!key)
		return (0);

	if (size == 0)
		return (0);

	index = hash_djb2(key) % size;

	return (index);
}
