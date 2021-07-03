#include "holberton.h"

/**
 * _strncpy -  function should work exactly like strncpy
 * @dest: String
 * @src: String
 * @n: Integer
 * Return:  the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{

if ((dest == 0) && (src == 0))
return (0);

int i;

for (i = 0; i != src[n]; i++)
dest[i] = src[i];

dest[i] = '\0';

return (dest);

}
