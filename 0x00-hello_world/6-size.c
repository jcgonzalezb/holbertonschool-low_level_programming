#include<stdio.h>
/**
 * main - Message
 * Return: Always 0 (Success)
 * sizeof evaluates the size of a variable
 */
int main(void)
{

  printf("Size of char: %lu byte\n", sizeof(char));
  printf("Size of int: %lu byte(s)\n", sizeof(int));
  printf("Size of long int: %lu byte(s)\n", sizeof(long int));
  printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
  printf("Size of float: %lu byte(s)\n", sizeof(float));

  return (0);

}
