#include "main.h"

/**
 *print_square - A function that prints a square of size n.
 *@size: integer input
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	char r; /* row */
	char c; /* column */

	r = 0;
	while (r < size)
	{
		c = 0;
		while (c < size)
		{
			_putchar('#');
			c = c + 1;
		}
		_putchar('\n');
		r = r + 1;
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}
