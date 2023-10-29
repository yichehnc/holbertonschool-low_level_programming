#include "main.h"

/**
 * print_chessboard - A function that prints a chessboard.
 *
 * @a: An 8x8 array of chessboard size.
 *
 * Reutrn: Prints the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	y = 0;
	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[y][x]);
			x = x + 1
		}
		_putchar('\n');
		y = y + 1;
	}
}
