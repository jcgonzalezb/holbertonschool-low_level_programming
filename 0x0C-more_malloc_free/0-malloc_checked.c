#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * malloc_checked - Returns a pointer to the allocated memory
 * @b : Integer
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{

	void *memory_address;

	if (b <= 0)
		return (NULL);

	memory_address = malloc(b);

	if (memory_address == NULL)
		exit(98);

	return (memory_address);

}
