#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: Size of the array.
 * Return: Pointer to the newly created hash table.
 * If something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;

	if (size < 1)
		return (NULL);

	hash_table_t *hashtable = malloc(sizeof(hash_table_t) * 1);

	if (!hashtable)
		return (NULL);

	hashtable->array = malloc(sizeof(hash_node_t *) * size);

	if (!hashtable->array)
		return (NULL);

	for (; i < size; ++i)
	{
		hashtable->array[i] = NULL;
	}
	return (hashtable);
}
