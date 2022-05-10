#include "holberton.h"

/**
 * _strlen- returns the length of a string
 * @s : string. '\0' (null character)
 * Return: Length of a string
 */

int _strlen(char *s)
{

	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);

}


/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest : copy source to this buffer
 * @src : source to copy
 * Return:  the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);

}
