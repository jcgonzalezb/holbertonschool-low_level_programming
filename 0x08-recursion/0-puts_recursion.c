#include "holberton.h"

/**
 * _puts_recursion - Write a function that prints a string
 * @s : a pointer to the string to print
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
