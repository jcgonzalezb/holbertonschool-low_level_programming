#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Program that prints the opcodes of its own main function.
 * @argc: Stores number of command-line arguments.
 * @argv: Array of character pointers listing all the arguments.
 * Return: int.
 */

int main(int argc, char *argv[])
{

	char *b;
	int y;
	int x;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		return (2);
	}
	b = (char *)main;

	for (y = 0; y < x; y++)
	{
		if (y < x - 1)
		{
			printf("%.2hhx ", b[y]);
		}
		else
		{
			printf("%.2hhx", b[y]);
		}

	}
	printf("\n");
	return (0);
}
