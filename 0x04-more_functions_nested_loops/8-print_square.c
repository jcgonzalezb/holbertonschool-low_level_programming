#include "holberton.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size : integer number
 * Return: Prints a square, followed by a new line.
 */

void print_square(int size)
{

int a;


if (size <= 0)
_putchar('\n');


for (a = 0; a < size; a++)
{
for (a = 0; a < size; a++)
_putchar('#');

_putchar('\n');
}
