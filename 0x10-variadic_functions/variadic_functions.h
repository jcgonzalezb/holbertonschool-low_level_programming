#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct printc - Struct for printing function
 * @symbol: the symbol that specity data type
 * @f: the print function
 *
 * Description:
 */
typedef struct printc
{
	char symbol;
	void (*f)(va_list);
} printc_f;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
