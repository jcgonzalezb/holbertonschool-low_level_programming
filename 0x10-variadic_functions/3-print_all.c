#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints characters.
 * @ptr: Pointer
 */

void print_char(va_list ptr)
{
	printf("%c", va_arg(ptr, int));
}

/**
 * print_int - prints integers.
 * @ptr: Pointer
 */

void print_int(va_list ptr)
{
	printf("%d", va_arg(ptr, int));
}

/**
 * print_float - prints float.
 * @ptr: Pointer
 */

void print_float(va_list ptr)
{
	printf("%f", va_arg(ptr, double));
}

/**
 * print_string - prints string.
 * @ptr: Pointer
 */

void print_string(va_list ptr)
{
	char *a;

	a = va_arg(ptr, char *);

	if (a == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", a);
}

/**
 * print_all - Function that prints anything.
 * @format: list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{

	char *separator = "";
	int i, j = 0;
	va_list ptr;

	printc_f options[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	{'\0', NULL}
	};

	va_start(ptr, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (options[i].symbol != '\0')
		{
			if (options[i].symbol == format[j])
			{
				printf("%s", separator);
				options[i].f(ptr);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
}
