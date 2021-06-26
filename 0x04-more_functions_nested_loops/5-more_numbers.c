#include "holberton.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14.
 * Return: the numbers, from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{

char c = '0';
int b = 0;

for (b = 1; b <= 10 ; ++b)
{
for (c = '0'; c <= ('9'); c++)
_putchar(c);
for (c = '0'; c <= ('4'); c++)
_putchar('0' + c);

_putchar('\n');
}
}
