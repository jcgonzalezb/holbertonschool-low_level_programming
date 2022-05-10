#include "holberton.h"


/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s : string
 */



void print_rev(char *s)
{

	int i = 0;
	int len = 0;

	while (s[i] != '\0')
		i++;

	len = i;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');

}
