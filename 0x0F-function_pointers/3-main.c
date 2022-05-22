#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Program that performs simple operations.
 * @argc: Stores number of command-line arguments.
 * @argv: Array of character pointers listing all the arguments.
 * Return: Result of the calculations.
 */

int main(int argc, char *argv[])
{

	int (*operation)(int, int);

	if (argv == NULL)
		return (0);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
