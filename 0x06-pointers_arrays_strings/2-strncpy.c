#include "holberton.h"

/**
 * _strncpy -  function should work exactly like strncpy
 * @dest: String
 * @src: String
 * @n: Integer
 * Return:  the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{

		dest[i] = '\0';
		i++;

	}
	return (dest);

}
