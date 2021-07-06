#include "holberton.h"

/**
 * _strpbrk -  function that searches a string for any of a set of bytes.
 * @s : String
 * @accept : String
 * Return:  pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */


char *_strpbrk(char *s, char *accept)
{

while (*s)
{

while (*accept)
{
if (*s == *accept)
return (s);

accept++;
}

s++;
}
return (NULL);
}
