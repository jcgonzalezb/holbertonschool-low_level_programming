#include "holberton.h"

/**
 * _strlen_recursion - Function that returns
 * the length of a string.
 * @s : a pointer to the string to print
 */

int _strlen_recursion(char *s)
{

    
    if (*s != '\0')
    {
        _strlen_recursion (s + 1);
        
        
    }
}