#include "holberton.h"

/**
 * _strchr -  function that locates a character in a string.
 * @s : String
 * @c : character
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{

int i = 0;
int j = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == 'c')
{
while (s[i] != '\0')
{
r[j] = s[i];
i++;
j++;
}
}
else
return (0);

}

return (r);
}
