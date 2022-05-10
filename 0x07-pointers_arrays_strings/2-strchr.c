#include "holberton.h"

/**
 * _strchr -  function that locates a character in a string.
 * @s : String
 * @c : character
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)

{

	while (*s)
	{
		if (*s == c)
			return (s);

		s++;
	}

	return (*s == c ? s : NULL);
}
