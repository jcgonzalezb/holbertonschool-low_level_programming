#include "holberton.h"

/**
 * _memcpy -  function that function that copies memory area.
 * @dest : String
 * @src : String
 * @n : integer
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
