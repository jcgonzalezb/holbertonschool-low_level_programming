#include "holberton.h"

/**
 * string_toupper -  Changes all lowercase letters of a string to uppercase.
 * @str: String
 * Return: Changes all lowercase letters of a string to uppercase.
 */

char *string_toupper(char *str)
{

	int i = 0;

	if (str == 0)
		return (0);

	for (i = 0; str[i]; i++)
	{

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

	}

	return (str);

}
