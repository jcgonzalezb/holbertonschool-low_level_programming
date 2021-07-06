#include "holberton.h"

/**
 * _strspn -  function that locates a character in a string.
 * @s : String
 * @accept : String
 * Return:  the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int i = 0;
int j = 0;

while (*s)
{

for (j = 0; accept[j]; j++)
{

if (*s == accept[j])
{
break;
}
}

if (!accept[j])
break;
}

s++;
}

return (i);
}
