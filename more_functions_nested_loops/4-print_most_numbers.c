#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9 except for 2 and 4.
 *
 * Return: Always: 0.
 */
void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
		n = n + 1;
	}
	_putchar('\n');
}
