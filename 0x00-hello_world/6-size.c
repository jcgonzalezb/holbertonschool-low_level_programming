#include<stdio.h>
/**
 * main - Message
 * Return: Always 0 (Success)
 * sizeof evaluates the size of a variable
 */
int main(void)
{
char charType;
int intType;
long int intType;
long long int doubleType;
float floatType;


printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(intType));
printf("Size of long long int: %zu bytes\n", sizeof(doubleType));
printf("Size of float: %zu bytes\n", sizeof(floatType));

return (0);

}
