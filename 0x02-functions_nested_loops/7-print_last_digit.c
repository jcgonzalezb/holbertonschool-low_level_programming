#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @r: number
 * Return: The value of the last digit.
 */

int print_last_digit(int r)
{
r = r % 10;
if (r < 0)
{
r *= -1;
return ('0' + r);
}
else
{
return (r);
}
}
