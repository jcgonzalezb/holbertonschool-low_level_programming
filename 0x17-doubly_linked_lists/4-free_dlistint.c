#include "lists.h"

/**
 * free_dlistint - that frees a dlistint_t list.
 * @head : Pointer to the head of the linked list.
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		/*free(head->n);*/
		free(head);
		head = head->next;
	}
}
