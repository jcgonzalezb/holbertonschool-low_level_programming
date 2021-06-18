#include <stdio.h>
/**
 * main - alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'd'; c = 'f'; c <= 'p'; c = 'r'; c <= 'z'; ++c)
putchar(c);
putchar('\n');
return (0);
}
