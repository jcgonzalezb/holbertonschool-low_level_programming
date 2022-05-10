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
 * puts2 - prints every other character of a string,
 * @str : string
 * starting with the first character, followed by a new line.
 */



void puts2(char *str)
{

	int i = 0;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i = i + 2)
		_putchar(str[i]);

	_putchar('\n');

}
