#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Write a program that prints all arguments it receives.
 * @argc : Stores number of command-line arguments passed by the user.
 * @argv : Array of character pointers listing all the arguments.
 * Return: Prints all arguments it receives.
 */

int main(int argc, char *argv[])
{
int a;
int b;
int c;

if (argc != 3)
{
printf("Error\n");
return (1);
}

a = atoi(argv[1]);
b = atoi(argv[2]);
c = a *b;

printf("%d\n", c);

return (0);
}
