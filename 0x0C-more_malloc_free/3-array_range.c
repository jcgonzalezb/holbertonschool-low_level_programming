#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * int *array_range - array created should contain all
 * the values from min (included) to max (included),
 * ordered from min to max.
 * @min : minimum value contained inside the array.
 * @max : maximun value contained inside the array.
 * Return: Pointer to a newly  created array.
 */

int *array_range(int min, int max)
{

	int *ptr;
	int dif, i;

	if (min > max)
		return (NULL);

	dif = max - min + 1;

	ptr = malloc(dif *sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < dif; i++)
		ptr[i] = min + i;

	return (ptr);
}
