#include "holberton.h"

/**
 * _strstr -  function finds the first occurrence of the substring
 * needle in the string haystack. The terminating null bytes (\0)
 * are not comparedfunction that searches a string for any of a set
 * of bytes.
 * @haystack : string
 * @needle : string
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */


char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
			if (!needle[b])
				return (&haystack[a]);
	}
	return (NULL);
}
