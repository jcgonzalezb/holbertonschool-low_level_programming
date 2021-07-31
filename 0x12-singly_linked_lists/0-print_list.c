#include "lists.h"

/**
 * print_list - function that prints all the elements
 * of a list_t list.
 * @h : header
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		return (print_list(h->next) + 1);
	}
	return (0);
}
