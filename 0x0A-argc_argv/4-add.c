
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_num - iterate through each argv to test if it's a number
 * @argvv: a argv
 * Return: true only if entire string is a number, false if not
 */

bool is_num(char *argvv)
{
	int a = 0;

	for (a = 0; argvv[a]; a++)
	{
		if (!(argvv[a] >= '0' && argvv[a] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - print sum if all arguments given are numbers
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on success, 1 if an argument wasn't a number
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	/* validate input */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* check all arguments to add numbers */
	while (i < argc)
	{
		if (is_num(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
