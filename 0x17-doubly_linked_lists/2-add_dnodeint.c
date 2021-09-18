#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a dlistint_t list.
 * @n : value inside the node.
 * @head : Pointer to the head of the linked list.
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (head == NULL)
		new_node->next = NULL;
	else
	{
		new_node->next = *head;
		new_node->prev = NULL;
	}

	if ((*head) != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

	return (new_node);
}
