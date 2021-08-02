#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * of a listint_t list.
 * @h : List
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
