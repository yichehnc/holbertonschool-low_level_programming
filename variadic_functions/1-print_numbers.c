#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers.
 *
 * @n: input integer
 * @separator: a separator between each integer
 *
 * Return: Returns all numbers in a string, else 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int num;
	va_list args;

	i = 0;

	va_start(args, n);
	while (i < n)
	{
		num = va_arg(args, unsigned int);
		printf("%d", num);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i = i + 1;
	}
	va_end(args);
	printf("\n");
}
