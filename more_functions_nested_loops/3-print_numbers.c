#include "main.h"

/**
 * print_numbers - Prints all the numbers from 0 and 9.
	*
	* Return: Always 0.
	*/
void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		_putchar(n + '0');
		n = n + 1;
	}
	_putchar('\n');
}
