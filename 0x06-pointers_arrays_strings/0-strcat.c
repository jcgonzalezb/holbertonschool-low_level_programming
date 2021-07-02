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
 * _strcat -  appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end
 * of dest, and then adds a terminating null byte
 * @dest: String
 * @src: String
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{


int i;
int j;

for (i = 0; dest[i] != '\0' && i < _strlen(dest); i++)
_putchar(dest[i]);

for (j = 0; j <= _strlen(src); i++)
_putchar(src[i]);

_putchar('\n');

return (*dest);

}
