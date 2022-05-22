#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - add
 * @a: number
 * @b: number
 * Return: number
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract
 * @a: number
 * @b: number
 * Return: number
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: number
 * @b: number
 * Return: number
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide
 * @a: number
 * @b: number
 * Return: number
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus for remainder
 * @a: number
 * @b: number
 * Return: number
 */


int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
