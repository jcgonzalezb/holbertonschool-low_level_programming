#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * string_nconcat - pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated.
 * @s1 : String 1
 * @s2 : String 2
 * @n : Number of characters assigned.
 * Return: Pointer to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *concat;
int len1 = 0;
int len2 = 0;
i = 0;
j = 0;


if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (n <= 0)
return (NULL);

while (*(s1 + i))
len1++, i++;

while (*(s2 + j))
len2++, j++;
len2++

if (n >= len2)
{
concat = malloc(sizeof(char) * (len1 + len2));
}
else
{
concat = malloc(sizeof(char) * (len1 + n));
}

if (concat == NULL)
return (NULL);

return (concat);

}
