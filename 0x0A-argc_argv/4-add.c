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
printf("0\n");

for (i = 1; i < argc; i++)
{
if ((argv[i] >= 'a' && argv[i] <= 'z') || (argv[i] >= 'A' && argv[i] <= 'Z'))
{
printf("Error\n");
return (1);
}
}

for (i = 1; i < argc; i++)
{
sum = sum + atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
