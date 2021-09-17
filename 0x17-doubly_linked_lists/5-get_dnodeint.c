#include "lists.h"

/**
 * get_dnodeint_at_index - function that  returns the nth node of
 * a dlistint_t linked list.
 * @head : Pointer to the head of the linked list.
 * @index : Index of the node.
 * Return: The nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
