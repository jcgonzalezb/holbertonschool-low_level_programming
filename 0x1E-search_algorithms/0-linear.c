#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an
 * array of integers using the Linear search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size:  Number of elements in array.
 * @value: Value to search for.
 * Return:  First index where value is located. -1 if value
 * is nor present in array or if array is Null.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
	{
		return (-1);
	}


	for (index = 0; index < size; index++)
	{
		if (array[index] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", index, array[index]);
			return (index);
		}
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
	}
	return (-1);
}
