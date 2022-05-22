#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i=0;
	while(ops[i].op)
	{
		if(*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);

		i++;

	}
	return(NULL);

}

int main(int argc, char *argv[])
{

	int(*operation)(int, int);

	if (argv == NULL)
		return (0);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[3] == '0' && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	operation = get_op_func(argv[2]);

	if(operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));
	return(1);
}
