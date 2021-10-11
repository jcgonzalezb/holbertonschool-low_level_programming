#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht:  Hash table you want to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned long int lenght_ht = ht->size;
	hash_node_t *node;

	if (!ht)
		return;

	while (i < lenght_ht)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (ht->array[i] != NULL)
			{
				node = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = node;
			}
			free(ht->array[i]);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
