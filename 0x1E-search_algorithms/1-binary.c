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
	size_t right = size - 1;
	size_t left = 0;
	size_t middle;
	size_t x, y;


	if (array == NULL)
	{
		return (-1);
	}

	if (right >= left)
	{
		middle = left + (right - left) / 2;

		if (array[middle] == value)
			return (middle);

		if (array[middle] > value)
		{
			x = middle - 1;
			return (binary_search(array, x, value));
		}
		y = middle + 1;
		return (binary_search(array, y, value));
	}
	return (-1);
}
