#include "holberton.h"
/**
 * print_alphabet_x10 - Prints the alphabet, 10 times.
 *
 * Return: Alphabet x 10 (Success)
 */

void print_alphabet_x10(void)
{
	char c;
	int b = 0;

	for (b = 1; b <= 10; ++b)
	{
		for (c = 'a'; c <= 'z'; ++c)
			_putchar(c);

		_putchar('\n');
	}
}
