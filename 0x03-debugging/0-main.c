#include "holberton.h"
/**
 * main - test file
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int result = positive_or_negative(n);

if (result > 0)
{
printf("%d is positive\n", result);
}
else if (result == 0)
{
printf("%d is zero\n", result);
}
else
{
printf("%d is negative\n", result);
}

return (0);
}
