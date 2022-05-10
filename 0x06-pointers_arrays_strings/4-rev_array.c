#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a : string
 * @n : integer
 * Return: Reverses the content of an array of integers.
 */

void reverse_array(int *a, int n)
{

	int i = 0;
	int j = n - 1;
	int rev;

	while (i < j)
	{
		rev = a[i];
		a[i] = a[j];
		a[j] = rev;
		i++, j--;
	}

}
