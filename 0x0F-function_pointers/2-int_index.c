#include "function_pointers.h"
#include <stddef.h>
/* defines size_t */

/**
 * int_index - function that searches for an integer.
 * @array : Array named array.
 * @size : Number of elements in the array array.
 * @cmp : pointer to the function to be used to compare values.
 * Return: -1 if If size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}

	return (-1);
}
