#include "lists.h"

/**
 * free_dlistint - that frees a dlistint_t list.
 * @head : Pointer to the head of the linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
