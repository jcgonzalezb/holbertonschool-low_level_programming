#include <stdlib.h>

/**
 * print_name - function that prints a name.
 * @name : name
 * @f : pointer that print a function.
 */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
