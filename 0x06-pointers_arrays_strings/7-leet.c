#include "holberton.h"

/**
 * leet -  function that encodes a string into 1337.
 * @str: String
 * Return: Encodes a string into 1337.
 */


char *leet(char *str)
{

int i = 0;
int j = 0;

int let [11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
int num [11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

while (str[i] != '\0')
{

while (let[j] != '\0')
{
if (str[i] == let[j])
str[i] = num[j];

j++;
}

i++;
}

return (str);

}
