#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * alloc_grid - Pointer to a 2 dimensional array of integers.
 * @width : Amount of columns
 * @height : Amount of rows
 * Return: Pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);


	for (i = 0; i < height; ++i)
	{
		array[i] = malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(array[i]);
			free(array);
			return (NULL);
		}

		for (j = 0; j < width; ++j)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
