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
 * rev_string - function that reverses a string.
 * @s : string
 */


void rev_string(char *s)
{

	char rev;
	int a = 0;
	int b = (_strlen(s) - 1);

	while (a < b)
	{
		rev = s[a];
		s[a] = s[b];
		s[b] = rev;
		a++, b--;
	}
}
