#include "holberton.h"

/**
 * _strlen- returns the length of a string
 * @s : string. '\0' (null character)
 * Return: Length of a string
 */

int _strlen(char *s)
{

int i = 0;

while (s[i] != '\0')
i++;

return (i);

}


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

for (i = 0; i <= _strlen(s1); i++)

if (s1[i] == s2[i])
_putchar(0);

else if (s1[i] > s2[i])
_putchar(s1[i] - s2[i]);

else
_putchar(s1[i] - s2[i]);

_putchar('\n');

return (0);

}
