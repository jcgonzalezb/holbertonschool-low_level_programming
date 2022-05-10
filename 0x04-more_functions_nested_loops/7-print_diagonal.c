#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n : integer number
 * Return: Diagonal line on the terminal.
 */


void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}

}
