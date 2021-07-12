#include "holberton.h"

/**
 * _puts_recursion - Write a function that prints a string,
 * followed by a new line.
 * @s : a pointer to the string to print
 * Return: void
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