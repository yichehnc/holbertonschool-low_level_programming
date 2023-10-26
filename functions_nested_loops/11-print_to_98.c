#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 *
 * @n: int input from user
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n = n + 1;
		}
		while (n == 98)
		{
			printf("%d", n);
			n = n + 1;
		}
	}
	else if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n = n - 1;
		}
		while (n == 98)
		{
			printf("%d", n);
			n = n - 1;
		}
	}
	printf("\n");
}
