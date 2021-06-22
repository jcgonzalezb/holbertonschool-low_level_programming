#include "holberton.h"
/**
 * print_alphabet - Prints the alphabet, in lowercase.
 *
 * Return: Alphabet (Success)
 */

void print_alphabet(void)
{
char c;
int b = 0;
for (b = 1; b <= 10; ++b)
{
for (c = 'a'; c <= 'z'; ++c)
_putchar(c);
_putchar('\n');
}
}
