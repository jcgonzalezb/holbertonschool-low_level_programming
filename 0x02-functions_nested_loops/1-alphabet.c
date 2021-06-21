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
for (c = 'a'; c <= 'z'; ++c)
_putchar(c);
_putchar('\n');
}
