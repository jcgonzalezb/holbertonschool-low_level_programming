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
int sum = 0;
if (argc > 0)
{
for (i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
sum += atoi(argv[i]);
}

}
return (0);
}
