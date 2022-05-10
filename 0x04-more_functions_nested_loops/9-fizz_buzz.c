#include "holberton.h"

/**
 * main - Fizz-Buzz test
 * For multiples of three print Fizz instead of the number
 * For the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: 0 (Success)
 */


int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0 && c % 5 == 0)
			printf("FizzBuzz");
		else if (c % 3 == 0)
			printf("Fizz");
		else if (c % 5 == 0)
			printf("Buzz");
		else
			printf("%d", c);

		if (c < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
