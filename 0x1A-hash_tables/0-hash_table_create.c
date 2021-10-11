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
	hash_table_t *hashtable;
	hash_node_t **array;

	if (size == 0)
		return (NULL);

	hashtable = malloc(sizeof(hash_table_t) * 1);

	if (!hashtable)
		return (NULL);

	array = malloc(sizeof(*array) * size);

	if (!array)
	{
		free(hashtable);
		return (NULL);
	}

	while (i < size)
	{
		array[i] = NULL;
		++i;
	}

	hashtable->size = size;
	hashtable->array = array;

	return (hashtable);
}
