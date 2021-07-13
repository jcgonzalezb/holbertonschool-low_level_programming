#include "holberton.h"

/**
 * main - Write a program that prints all arguments it receives.
 * @argc : Stores number of command-line arguments passed by the user.
 * @argv : Array of character pointers listing all the arguments.
 * Return: Prints all arguments it receives.
 */

int main(int argc, char *argv[])
{
int i;
int mult = 1;

if (argc == 1)
{
printf("Error\n");
return (1);
}

if (argc >= 2)
{
for (i = 1; i < argc; i++)
{
mult = mult *atoi(argv[i]);

}
printf("%d\n", mult);
}

return (0);
}
