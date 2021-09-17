#include "lists.h"
#include <assert.h>

/**
 * sum_dlistint - function that returns the sum
 * of all the data (n) of a dlistint_t linked list.
 * @head : Pointer to the head of the linked list.
 * Return: The nth node of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
