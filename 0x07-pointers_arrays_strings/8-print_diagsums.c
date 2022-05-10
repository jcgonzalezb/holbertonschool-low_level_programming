#include "holberton.h"

/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a : Matrix
 * @size : integer
 * Return: Prints the chessboard.
 */


void print_diagsums(int *a, int size)
{

	int row, *pos;
	int sum1 = 0;
	int sum2 = 0;

	for (pos = a, row = 0; row < size; ++row, pos += size + 1)
		sum1 += *pos;

	for (pos = a + size - 1, row = 0; row < size; ++row, pos += size - 1)
		sum2 += *pos;

	printf("%d, %d\n", sum1, sum2);

}
