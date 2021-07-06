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

while (*haystack)
{

while (*needle)
{
if (*haystack == *needle)
return (haystack);

needle++;
}

haystack++;
}
return (NULL);
}

}
