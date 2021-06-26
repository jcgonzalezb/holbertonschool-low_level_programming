#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n : integer number
 * Return: Diagonal line on the terminal.
 */


void print_diagonal(int n)
{
int a = n;

for (a = n; a > 0 ; a--)
{
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
