#include "holberton.h"


/**
 * rev_string - function that reverses a string.
 * @s : string
 */


void rev_string(char *s)
{

char re;
int i = 0;
int j = 0;
int len = 0;


while (s[i] != '\0')
i++;

len = i;

for (i = len - 1; i >= 0; i--, j++)
char tmp = s[i];
s[i] = s[j];
s[j] = tmp;

}
