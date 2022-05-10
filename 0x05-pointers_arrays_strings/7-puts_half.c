#include "holberton.h"

/**
 * _strlen- returns the length of a string
 * @s : string.
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
 * puts_half - Prints second half of a string, followed by a new line.
 * @str : string
 */

void puts_half(char *str)
{

	int n = 0;
	int m = 0;

	n = (_strlen(str) / 2) + 1;
	m = _strlen(str) / 2;

	if (_strlen(str) % 2 == 0)
	{
		int i = m;
		for (i = m; str[i] != '\0' && i < _strlen(str); ++i)
			_putchar(str[i]);
	}
	else
	{
		int i = n;
		for (i = n; str[i] != '\0' && i < _strlen(str); ++i)
			_putchar(str[i]);
	}
	_putchar('\n');
}
