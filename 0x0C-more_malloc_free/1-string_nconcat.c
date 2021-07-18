#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */

int _strlen(char *string)
{
int i;

for (i = 0; string[i] != '\0'; i++)
;
return (i);
}

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
char *ptr;
int num, len, i, j;

num = n;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (num < 0)
return (NULL);
if (num >= _strlen(s2))
num = _strlen(s2);

len = _strlen(s1) + num + 1;

ptr = malloc(sizeof(*ptr) * len);
if (ptr == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
ptr[i] = s1[i];
for (j = 0; j < num; j++)
ptr[i + j] = s2[j];
ptr[i + j] = '\0';

return (ptr);
}







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
