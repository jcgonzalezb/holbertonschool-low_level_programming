#include "main.h"

/**
 * binary_to_uint - function that prints all the elements
 * of a list_t list.
 * @b : Pointer to a string of 0 and 1 chars
 * Return: Converted number or 0 if there is one or more
 * chars in the string b that is not 0 or 1 or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	unsigned int j = 0;
	int c;
	unsigned int len;

	if (b == NULL)
		return (0);

	while (b[j] != '\0')
		j++;

	len = j;

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);

		if (b[c] == '1')
		{
			i += k;
		}
		k *= 2;
	}
	return (i);
}
