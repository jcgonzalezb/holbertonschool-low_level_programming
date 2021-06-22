#include "holberton.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: number
 * Return: Absolute value of an integer.
 */

int _abs(int n)
{

if (n > 0)
{
_putchar(n);
}
else if (n == 0)
{
_putchar('0');
}
else
{
n = n * -1;
_putchar(n);
}

_putchar('\n');
}
