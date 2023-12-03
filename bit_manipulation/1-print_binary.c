#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints a long unsigned int into binary
 *
 * @n: integer to be converted
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
