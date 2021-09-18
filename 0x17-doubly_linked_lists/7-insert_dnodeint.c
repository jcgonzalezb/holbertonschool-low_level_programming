#include "lists.h"
#include <assert.h>

/**
 * insert_dnodeint_at_index - that inserts a new node
 * at a given position.
 * @h : Pointer to the head of the linked list.
 * @idx : Index of the list where the new node should
 * be added. Index starts at 0.
 * @n : value inside the node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *tmp;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	tmp = *h;
	while (i < (idx - 1))
	{
		tmp = tmp->next;
		i++;

		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = tmp;
	new_node->next = tmp->next;
	tmp->prev->next = new_node;
	tmp->prev = new_node;
	return (new_node);

	if (idx == 1)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
