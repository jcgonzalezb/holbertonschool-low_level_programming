#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * free_grid - Frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid : Matrix
 * @height :  height of array
 * Return: Frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 */

void free_grid(int **grid, int height)
{
	int i = 0;
	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
