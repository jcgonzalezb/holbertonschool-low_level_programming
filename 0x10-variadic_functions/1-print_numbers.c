#include "variadic_functions.h"

/**
 * print_numbers - that prints strings, followed by a new line.
 * @n: Amount of parameters.
 * @...: the unnamed arguments
 * @separator: comma
 * Return: A list of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(ptr, int));
			if (separator != NULL && i != n)
				printf("%s", separator);
		}
		va_end(ptr);
	}
	printf("\n");
}
