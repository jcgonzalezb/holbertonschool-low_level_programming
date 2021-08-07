#include "main.h"

/**
 * set_bit - function that sets the value of a bit to
 * 1 at a given index.
 * @n: number given.
 * @index: position requested.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int mask = 1;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	mask <<= index;
	*n = (*n | mask);

	return (1);
}
