#include "holberton.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size : integer number
 * Return: Prints a square, followed by a new line.
 */

void print_square(int size)
{

	int a;
	int b;

	if (size <= 0)
		_putchar('\n');

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
			_putchar('#');

		_putchar('\n');
	}
}
