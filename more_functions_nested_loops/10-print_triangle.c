#include "main.h"

/**
 * print_triangle - Prints a triangle of base (int size)
 *
 *@size: size of base
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i;
	int j;

	i = size;

	while (i > 0)
	{
		j = 1;
		while (j < i)
		{
			_putchar(' ');
			j = j + 1;
		}
		while (j <= size)
		{
			_putchar('#');
			j = j + 1;
		}
		_putchar('\n');
		i = i - 1;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
