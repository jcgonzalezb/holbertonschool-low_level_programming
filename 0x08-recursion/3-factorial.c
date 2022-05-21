#include "holberton.h"

/**
 * factorial - function that returns the factorial
 * @n : integer
 * of a given number.
 * Return: The factorial of a given number.
 */

int factorial(int n)
{

	if (n >= 1)
		return (n * factorial(n - 1));
	else if (n < -1)
		return (-1);
	else
		return (1);


}
