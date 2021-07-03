#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a : string
 * @n : integer
 */

void reverse_array(int *a, int n)
{

int i = 0;
int j = n;
char rev;

while (a[i] < a[j])
{
rev = a[i];
a[i] = a[j];
a[j] = rev;
i++, j--;
}


}
