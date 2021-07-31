#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements
 * of a list_t list.
 * @h : header
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	if (h->str == NULL)
		printf("[0] (nil)");

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
