#include "holberton.h"
/**
 * print_chessboard -  function that prints the chessboard.
 * @a : array
 * Return: Prints the chessboard.
 */


void print_chessboard(char (*a)[8])
{

	int fil;
	int col;


	for (fil = 0; fil < 8; fil++)
	{
		for (col = 0; col < 8; col++)
			{
				_putchar(a[fil][col]);
			}
		_putchar('\n');
	}

}
