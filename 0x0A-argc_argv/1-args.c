#include "holberton.h"

/**
 * main - Program that prints the number of arguments passed into it.
 * @argc : Stores number of command-line arguments passed by the user.
 * @argv : Array of character pointers listing all the arguments.
 * Return: Number of arguments passed into it.
 */

int main(int argc, char *argv[])
{
if (argc > 0)
printf("%d\n", argc - 1);

return (0);
}
