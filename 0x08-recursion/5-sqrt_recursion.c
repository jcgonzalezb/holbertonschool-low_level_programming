#include "holberton.h"

/**
 * square - the natural square root
 * of a number.
 * @n : integer
 * @r : integer
 * Return: The natural square root of a number.
 */

int square(int n, int r)
{

	if (n == 1)
		return (1);

	if (r * r > n)
		return (-1);

	if (r * r == n)
		return (r);

	return (square(n, r + 1));
}


/**
 * _sqrt_recursion - the natural square root
 * of a number.
 * @n : integer
 * Return: The natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (square(n, 0));
}
