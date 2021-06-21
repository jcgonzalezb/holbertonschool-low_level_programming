#include <stdio.h>
#include <holberton.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _isalpha - checks for alphabetic character.
 * c: letter
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z' && c <= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
