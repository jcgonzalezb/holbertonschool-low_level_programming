#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht:  Hash table you want to add or update the key/value to.
 * @key: The key to add to the hash table.
 * @value: s the value associated with the key. value must be duplicated.
 * value can be an empty string.
 * Return:  1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;
	char *v;

	if (!ht || !value || !key || strlen(key) == 0 || !(ht->array))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[index];

	while (node && (strcmp(key, node->key) != 0))
		node = node->next;

	if (node != NULL)
	{
		v = strdup(value);
		if (!v)
			return (0);
		if (node->value)
			free(node->value);
		node->value = v;
		return (1);
	}

	return (new_add_node(ht, key, value, index));
}

/**
 * new_add_node - function that creates and adds a node to the hash table.
 * @ht:  Hash table you want to add or update the key/value to.
 * @key: The key to add to the hash table.
 * @value: s the value associated with the key. value must be duplicated.
 * value can be an empty string.
 * @index: index to insert in at hash table.
 * Return:  1 if it succeeded, 0 otherwise.
 */
int new_add_node(hash_table_t *ht, const char *key, const char *value,
			unsigned long int index)
{
	hash_node_t *node = NULL;
	char *k;
	char *v;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	k = strdup(key);
	if (!k)
	{
		free(node);
		return (0);
	}

	v = strdup(value);

	if (!v)
	{
		free(k);
		free(node);
		return (0);
	}

	node->key = k;
	node->value = v;

	if ((ht->array)[index] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[index];
	(ht->array)[index] = node;

	return (1);
}
