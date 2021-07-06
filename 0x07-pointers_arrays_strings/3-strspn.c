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


while (*s)
{

while (*accept)
{
if (*accept == *s)
{
i++;
}
accept++;
}

s++;
}

return (i);
}
