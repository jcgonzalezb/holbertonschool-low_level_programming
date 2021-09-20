#include "lists.h"
#include <assert.h>

/**
 * delete_dnodeint_at_index -  deletes the node at index
 * index of a dlistint_t linked list.
 * @head : Pointer to the head of the linked list.
 * @index : Index of the list where the new node should
 * be added. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (*head == NULL || *head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	while ((index != 0) && (tmp->next != NULL))
	{
		index -= 1;
		tmp = tmp->next;
	}
	if (index == 0)
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
		free(tmp);
		return (1);
	}
	return (-1);
}
