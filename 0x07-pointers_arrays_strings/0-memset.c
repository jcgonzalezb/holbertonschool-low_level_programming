#include "holberton.h"

/**
 * _memset -  function that fills memory with a constant byte.
 * @s : String
 * @n : integer
 * @b : character
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

int i;

s = &i;
 
for (i; s[i] < s[n]; i++)
{
s[i] = b;
}

return (s);
}
