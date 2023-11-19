#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings
 *
 * @n: input integer
 * @separator: a separator between each string
 *
 * Return: Returns all strings, else 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	i = 0;

	va_start(args, n);
	while (i < n)
	{
		str = va_arg(args, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i = i + 1;
	}
	va_end(args);
	printf("\n");
}
