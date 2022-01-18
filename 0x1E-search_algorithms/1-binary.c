#include "search_algos.h"

/**
 * print_array - Function that prints ana rray.
 * @array: Pointer to the first element of the array to search in.
 * @left:  Left index of the original array.
 * @right: Right index of the original array.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i != right)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

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
	size_t right = size - 1, left = 0, middle = 0;

	if (array == NULL || size < 1)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		middle = left + (right - left) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
		{
			left = middle + 1;
		}
	}
	return (-1);
}
