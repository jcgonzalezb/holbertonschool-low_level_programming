#include "holberton.h"

/**
 * _strcmp -  function should work exactly like strcmp
 * @s1: String 1
 * @s2: String 2
 * Return: 0 if the strings are the same
 * Different to zero if the strings are different.
 */

int _strcmp(char *s1, char *s2)
{

int i;

for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] == s2[i])
return (0);

else if (s1[i] > s2[i])
a = (s1[i] - s2[i]);
return (a);

else
a = (s1[i] - s2[i]);
return (a);
}
}
