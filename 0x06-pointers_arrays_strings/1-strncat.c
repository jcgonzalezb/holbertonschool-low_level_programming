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
 * _strncat -  function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * Return: A pointer to the resulting string dest
 * @dest: String
 * @src: String
 * @n : Integer
 */

char *_strncat(char *dest, char *src, int n)
{

int i;
int j;

for (i = 0; dest[i] != '\0' && i < _strlen(dest); i++)
_putchar(dest[i]);

for (j = 0; j <= src[n]; j++)
_putchar(src[i]);

_putchar('\n');

return (*dest);

}
