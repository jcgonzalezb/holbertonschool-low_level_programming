#include "holberton.h"

/**
 * leet -  function that encodes a string into 1337.
 * @str: String
 * Return: Encodes a string into 1337.
 */


char *leet(char *str)
{

	int i;
	int j;

	int let [] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int num [] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (str[i] == let[j])
				str[i] = num[j];

		}
	}

	return (str);

}
