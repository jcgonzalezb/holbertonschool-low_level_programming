#include "holberton.h"

/**
 * _strncat -  function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: String
 * @src: String
 * @n: Integer
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;

	if (dest == 0)
		return (0);

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
