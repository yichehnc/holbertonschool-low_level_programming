#include "main.h"

/**
 * print_last_digit - Prints out the last digit.
 *
 * @n: char input
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		x = (x * -1);
	}
	_putchar('0' + x);
	return (x);
}
