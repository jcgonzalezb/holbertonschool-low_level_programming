#include "holberton.h"

/**
 * main - Program that prints its name, followed by a new line.
 * @argc : Stores number of command-line arguments passed by the user.
 * @argv : Array of character pointers listing all the arguments.
 * Return: Name of the program.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
