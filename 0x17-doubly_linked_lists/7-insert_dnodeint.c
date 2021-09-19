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
	dlistint_t *new_node, *tmp, *prev_node;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	tmp = *h;
	prev_node = NULL;

	while (tmp != NULL)
	{
		if (i == idx)
		{
			prev_node->next = new_node;
			new_node->prev = prev_node;
			new_node->next = tmp;
			tmp->prev = new_node;
			return (new_node);
		}
		if ((i == idx - 1) && (tmp->next == NULL))
		{
			return (add_dnodeint_end(h, n));
		}
		prev_node = tmp;
		tmp = tmp->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
