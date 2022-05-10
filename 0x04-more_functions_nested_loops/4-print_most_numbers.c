#include "holberton.h"

/**
 * print_most_numbers -  prints the numbers, from 0 to 9. No 2 and 4.
 * Return: the numbers, from 0 to 9, followed by a new line.
 */


void print_most_numbers(void)

{
	char c = '0';

	for (c = '0'; c <= '9'; c++)
	{

		if (c == '2')
			continue;

		if (c == '4')
			continue;

		_putchar(c);
	}
	_putchar('\n');

}
