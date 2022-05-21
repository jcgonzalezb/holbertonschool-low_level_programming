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


	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
