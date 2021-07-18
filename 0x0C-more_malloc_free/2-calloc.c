#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb : Number of elements.
 * @size : Size of elements in bytes.
 * Return: Pointer to a newly allocated space in memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *ptr;
int n, amount;
n = nmemb;
amount = size;

if (n == 0)
return (NULL);

if (amount == 0)
return (NULL);

ptr = malloc(n *amount);

if (ptr == NULL)
return (NULL);

return (ptr);

}
