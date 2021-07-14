#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Program that adds positive numbers.
 * @argc : Stores number of command-line arguments passed by the user.
 * @argv : Array of character pointers listing all the arguments.
 * Return: Program that adds positive numbers.
 */

int main(int argc, char *argv[])
{

int i;
int sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

while (i < argc)
{
if (atoi(argv[i]) >= '0' && atoi(argv[i]) <= '9')
{
sum = sum + atoi(argv[i]);
}
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
