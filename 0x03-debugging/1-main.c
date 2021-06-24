#include <stdio.h>

/**
 * main - causes an infinite loop. i not incresing after the while loop is done
 * Return: 0
 */

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

while (i < 10)/* value of i is not incresing after the while loop */
{
putchar(i);
}

printf("Infinite loop avoided! \\o/\n");

return (0);
}
