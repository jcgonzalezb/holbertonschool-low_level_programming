#include "holberton.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n : integer number
 * Return: A straight line in the terminal.
 */


void print_line(int n)
{

	int a = n;

	for (a = n; a > 0 ; a--)
		_putchar('_');
	_putchar('\n');

}
