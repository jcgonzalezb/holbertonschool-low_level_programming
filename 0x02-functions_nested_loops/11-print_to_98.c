#include "holberton.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number
 * Return: All natural numbers from n to 98
 */


void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
		printf("%d", n);

	printf("\n");
}
