#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 * @a: points to the chess board
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row, col;
	char car;

	row = 0;
	col = 0;

	while (row < 8)
	{
		while (col < 8)
		{
			car = *a[row];
			_putchar(car);
			col++;
		}
		row++;
	}
}


