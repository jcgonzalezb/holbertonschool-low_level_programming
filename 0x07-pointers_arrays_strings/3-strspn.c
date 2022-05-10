#include "holberton.h"

/**
 * _strspn -  function that locates a character in a string.
 * @s : String
 * @accept : String
 * Return:  the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int i;
	char *accept_p;


	for (i = 0; s[i]; ++i)
	{

		for (accept_p = accept; *accept_p; ++accept_p)
		{

			if (s[i] == *accept_p)
			{
				break;
			}
		}

		if (!*accept_p)
			break;
	}

	return (i);
}
