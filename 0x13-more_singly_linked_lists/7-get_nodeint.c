#include "lists.h"
#include <assert.h>
/**
 * get_nodeint_at_index -  function that returns
 * the nth node of a listint_t linked list.
 * @head: Linked list.
 * @index: Index of the node.
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		if (count == index)
	{
			return (head);
	}
		count++;
		current = current->next;
	}
	return (NULL);
}
