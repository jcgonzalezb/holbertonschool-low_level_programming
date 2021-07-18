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
unsigned int len1 = 0, unsigned int len2 = 0, unsigned int lenf = 0;
unsigned int i = 0, unsigned int j = 0;

if (n <= 0)
return (NULL);

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (*(s1 + i))
len1++, i++;

while (*(s2 + j))
len2++, j++;

if (n >= len2)
lenf = len2 + 1;

if (n < len2)
lenf = n + 1;

concat = malloc(sizeof(char) * (len1 + lenf));
if (concat == NULL)
return (NULL);
i = 0, j = 0;
while (i < len1)
{
*(concat + i) = *(s1 + i);
i++;
}
while (j < lenf)
{
*(concat + i) = *(s2 + j);
i++, j++;
}
return (concat);
}
