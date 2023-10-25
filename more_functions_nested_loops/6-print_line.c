#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal.
 *
 * @n: int input from user
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i = i + 1;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
