#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @r: number
 * Return: The value of the last digit.
 */

int print_last_digit(int r)
{
if (r < 0)
{
r *= -1;
return ('0' + (r % 10));
}
else
{
return (r % 10);
}
}
