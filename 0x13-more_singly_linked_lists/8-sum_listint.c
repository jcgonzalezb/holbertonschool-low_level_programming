#include "lists.h"
#include <assert.h>
/**
 * sum_listint -   function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head: Linked list.
 * Return: sum of all the data (n) of a listint_t
 * linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
