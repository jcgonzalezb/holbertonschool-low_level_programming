#include "holberton.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 */



void puts2(char *str)
{

int i = 0;
for (i = 0; str[i] != '\0'; i+=2)
_putchar(str[i]);

_putchar('\n');

}
