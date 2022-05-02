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
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		n = n * -1;
		return (n);
	}
	_putchar('\n');
}
