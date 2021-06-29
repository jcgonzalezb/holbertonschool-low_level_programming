#include "holberton.h"


/**
 * rev_string - function that reverses a string.
 * @s : string
 */


void rev_string(char *s)
{

char tmp;
int i = 0;
int j = 0;
int len = 0;


while (s[i] != '\0')
i++;

len = i;

for (i = len - 1; i >= 0; i--, j++)
tmp = s[j];
s[j] = s[i];
s[i] = tmp;

}
