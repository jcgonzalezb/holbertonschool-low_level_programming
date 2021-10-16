#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht:  Hash table you want to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL;
	unsigned long int lenght_ht = ht->size;
	char *comma = "";

	if (!ht || !ht->array)
		return;
	
	if (ht == NULL)
		return; 

	putchar('{');
	while (i < lenght_ht)
	{
		node = ((ht->array)[i]);
		while (node)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
		i++;
	}
	putchar('}');
	printf("\n");
}
