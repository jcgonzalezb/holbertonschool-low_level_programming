#include <stdio.h>
#include "functions_pointers.h"
/**
 * print_name - function that prints a name.
 * @name : name
 * @f : pointer that print a function.
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{

if (name == NULL)
return;

if (f == NULL)
return;

f(name)
}

