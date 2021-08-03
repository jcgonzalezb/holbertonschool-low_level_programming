#include "lists.h"

/**
 * free_listint2 - function that frees
 * a listint_t list.
 * @head: Linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head) -> next;
		free(temp);
		*head = temp;

	}
	head = NULL;
}
