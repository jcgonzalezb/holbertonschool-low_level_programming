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
r = r * -1;
r = r % 10;
return ('0' + r);
}
else
{
r = r % 10;
return (r);
}
}
