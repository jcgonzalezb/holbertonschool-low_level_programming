#include <stdio.h>
/**
 * main - All the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char l;
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	for (l = 'a'; l <= 'f'; ++l)
		putchar(l);

	putchar('\n');
	return (0);

}
