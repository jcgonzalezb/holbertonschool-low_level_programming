#include "holberton.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a : integer
 * @n : integer
 */

void print_array(int *a, int n)
{

int i = 0;
if (n == 1)
{
printf("%d", a[i]);
}
else
{
for (i = 0; i < (n - 1); i++)
{
printf("%d", a[i]);
putchar(',');
putchar(' ');
}
printf("%d", a[(n - 1)]);

putchar('\n');
}
}
