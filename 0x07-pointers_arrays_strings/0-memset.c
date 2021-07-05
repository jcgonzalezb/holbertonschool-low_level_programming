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

if (s == 0)
return (0);

unsigned char *ptr = s;
while (*ptr != '\0' && n--)
{
*ptr++ = (unsigned char)b;
}

return (s);

}
