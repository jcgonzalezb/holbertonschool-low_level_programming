#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - random number n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

lastDigit = n % 10;

if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (n == 0)
{
printf("Last digit of %d is %s and %d is 0\n", n, lastDigit);
}
else if (n < 6 && != 0)
{
printf("Last digit of %d is %s is less than 6 and not 0\n", n, lastDigit);
}
return (0);
}
