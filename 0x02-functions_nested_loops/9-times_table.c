#include "holberton.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: The 9 times table, starting with 0
 */


void times_table(void)
{

int i = 0;
int c = 0;
int n;
for (i = 0; i <= 9; i++)
{
for (c = 0; c <= 9; c++)
{
n = i * c;
_putchar('0' + (n / 10));
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}

}
