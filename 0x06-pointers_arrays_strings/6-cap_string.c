#include "holberton.h"

/**
 * cap_string -  Function that capitalizes all words of a string.
 * @str: String
 * Return: Capitalizes all words of a string.
 */

char *cap_string(char *str)
{
	int i, j;
	char points[13] = {
	',', ';', '.', '!', '?',
	'(', ')', '{', '}', ' ',
	'\t', '\n', '"'
	};

	if (str == 0)
		return (0);

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; points[j] != '\0'; j++)
		{
			if (str[i] == points[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);

}
