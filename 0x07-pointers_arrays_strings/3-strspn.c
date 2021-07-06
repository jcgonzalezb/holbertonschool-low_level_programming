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

unsigned int *count = CountArray(s);
unsigned int i;
unsigned int count_char = 0;

for (i = 0; *(accept + i); i++)
{
if (count[*(accept + i)] != 0)
{
count_char++;
count[*(accept + i)]--;
}
}

return (count_char);
}
