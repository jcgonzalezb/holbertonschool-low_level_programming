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
	unsigned int hash;
	unsigned int i;

	hash = 0;
	i = 0;

	while (key && key[i])
	{
		hash = (hash + key[i]) % size;
		++i;
	}
	return (hash);
}

