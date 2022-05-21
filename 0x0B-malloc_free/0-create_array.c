#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size : Size of the array
 * @c : Character
 * Return: an array of chars,
 * and initializes it with a specific char.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (i < (int)size)
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';

	return (arr);
}
