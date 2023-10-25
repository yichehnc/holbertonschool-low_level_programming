#include "main.h"

/**
 * print_diagonal - Prints the number of spaces according to the current line.
 *
 * @n: Number of times the character \ should be printed
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	char r; /* row */
	char c; /* column */

	r = 0;

	while (n > 0)
	{
		c = r;
		while (c > 0)
		{
			_putchar(' ');
			c = c - 1;
		}
		_putchar('\\');
		_putchar('\n');
		r = r + 1;
		n = n - 1;
	}
	if (r <= 0)
	{
		_putchar('\n');
	}
}
