#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: letter
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
for (i = 0; i < length; c++)
{
int c = 1;

c &= s[i] >= 'a' && s[i] <= 'z';
c &= s[i] >= 'A' && s[i] <= 'Z';
c &= s[i] == ' ';

if (!c)
{
return (0);
}
}
}
