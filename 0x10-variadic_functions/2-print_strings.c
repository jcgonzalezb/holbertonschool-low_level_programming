#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - that prints strings, followed by a new line.
 * @n: Amount of parameters.
 * @separator: comma
 * Return: A list of characters.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list ptr;
	unsigned int i;
	char *j;

	if (n > 0)
	{
		va_start(ptr, n);
		for (i = 1; i <= n; i++)
		{
			j = va_arg(ptr, char *);

			if (j == NULL)
				printf("(nil)");
			else
				printf("%s", j);

			if (separator != NULL && i != n)
				printf("%s", separator);
		}
		va_end(ptr);
	}

	printf("\n");
}
