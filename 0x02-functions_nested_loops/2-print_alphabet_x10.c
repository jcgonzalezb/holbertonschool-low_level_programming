#include <stdio.h>
#include <holberton.h>
#include <stdlib.h>
/**
 * main - Prints the alphabet, in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
print_alphabet();
return (0);
}

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
