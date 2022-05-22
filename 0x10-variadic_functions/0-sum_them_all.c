#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: Amount of parameters.
 * @...: the unnamed arguments
 * Return: A sum of integers
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list ptr;

	unsigned int sum = 0, i;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);

}
