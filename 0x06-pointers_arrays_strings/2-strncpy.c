#include "holberton.h"

/**
 * _strncpy- function should work exactly like strncpy
 * @dest : String
 * @src : String
 * @n : Integer
 * Return: function that copies a string
 */

char *_strncpy(char *dest, char *src, int n)
{


if ((dest == NULL) && (src == NULL))
return (NULL);

char *start = dest;

while (*src && n--)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (start);

}
