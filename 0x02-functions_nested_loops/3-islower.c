#include <stdio.h>
#include <holberton.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _islower - checks for lowercase character
 * c: letter
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
