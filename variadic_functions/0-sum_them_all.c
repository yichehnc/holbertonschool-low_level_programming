#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns
 * the sum of all its parameters.
 *
 * @n: input integer
 *
 * Return: Returns sum, else return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int j;
	unsigned int sum;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	i = 0;
	sum = 0;

	va_start(args, n);
	while (i < n)
	{
		j = va_arg(args, unsigned int);
		sum = sum + j;
		i = i + 1;
	}
	va_end(args);
	return (sum);
}
