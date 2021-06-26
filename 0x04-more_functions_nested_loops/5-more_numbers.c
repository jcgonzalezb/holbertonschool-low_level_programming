#include "holberton.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14.
 * Return: the numbers, from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
int b = 0;
int m = 0;

for (b = 1; b <= 10 ; ++b)
{
for (m = 0; m < 14; ++m)
{
_putchar('0' + (m / 10));
_putchar('0' + (m % 10));
}
_putchar('\n');
}
}
