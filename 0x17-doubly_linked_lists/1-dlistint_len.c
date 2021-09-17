#include "lists.h"

/**
 * dlistint_len - function that returns the
 * number of elements in a linked dlistint_t list.
 * @h : List
 * Return: The number of elements in a linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
