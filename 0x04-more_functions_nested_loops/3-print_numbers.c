#include "holberton.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return: the numbers, from 0 to 9, followed by a new line.
 */

void print_numbers(void)
{
char c;

for (c = '0'; c <= '9'; ++c)
_putchar('0' + c);

_putcha('\n');
}
