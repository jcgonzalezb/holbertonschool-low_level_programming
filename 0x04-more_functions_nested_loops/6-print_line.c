#include "holberton.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n : integer number
 * Return: A straight line in the terminal.
 */


void print_line(int n)
{

int b;
int n;
char c = '_';

if (n <= 0)
_putchar('\n');

for (b = 1; b <= n ; b++)
_putchar(c);

}
