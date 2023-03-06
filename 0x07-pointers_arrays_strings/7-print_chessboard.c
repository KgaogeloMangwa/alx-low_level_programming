#include "main.h"

/**
 * print_chessboard - function to print a chessboard
 * @a: array of the chess board
 * Return: 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; n < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
