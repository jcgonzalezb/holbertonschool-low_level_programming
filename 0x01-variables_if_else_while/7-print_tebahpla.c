#include <stdio.h>
/**
 * main - alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');

	return (0);
}
