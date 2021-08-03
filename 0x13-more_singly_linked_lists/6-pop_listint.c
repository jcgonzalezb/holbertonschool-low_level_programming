#include "lists.h"

/**
 * pop_listint - function that deletes the
 * head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: Linked list
 * Return: Head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int retval = -1;
	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	next_node = (*head)->next;
	retval = (*head)->val;
	free(*head);
	*head = next_node;

	return (retval);
}
