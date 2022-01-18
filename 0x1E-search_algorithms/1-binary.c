#include "search_algos.h"

/**
 * binary_search - Function that searches for a value in an
 * array of integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size:  Number of elements in array.
 * @value: Value to search for.
 * Return:  First index where value is located. -1 if value
 * is nor present in array or if array is Null.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0, middle, x = 0, y = size - 1;

	if (array == NULL || size < 1)
		return (-1);

	printf("Searching in array: ");
	for (x = low; x < y; x++)
	{
		printf("%d, ", array[x]);
	}
	printf("%d\n", array[x]);

	while (low < high)
	{
		middle = low + (high - low) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
		{
			high = middle - 1, y = high;
			printf("Searching in array: ");
			for (x = low; x < y; x++)
			{
				printf("%d, ", array[x]);
			}
			printf("%d\n", array[x]);
		}
		else
		{
			low = middle + 1, y = high;
			printf("Searching in array: ");
			for (x = low; x < y; x++)
			{
				printf("%d, ", array[x]);
			}
			printf("%d\n", array[y]);
		}
	}
	return (-1);
}
