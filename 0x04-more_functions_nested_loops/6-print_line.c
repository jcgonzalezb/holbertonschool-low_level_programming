#include "holberton.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n : integer number
 * Return: A straight line in the terminal.
 */


void print_line(int n)
{

int b;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (b = 1; b <= n ; b++)
_putchar('_');
_putchar('\n')
}
}
