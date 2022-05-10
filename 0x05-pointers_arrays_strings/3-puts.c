#include "holberton.h"
/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str : string
 * Return: Prints a string
 */

void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	_putchar('\n');


}
