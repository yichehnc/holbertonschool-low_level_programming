#include <starg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - A function that prints char
 *
 * @args: string to be printed
 *
 * Return: Void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - A function that prints integer
 *
 * @args: string to be printed
 *
 * Return: Void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_int - A function that prints float
 *
 * @args: string to be printed
 *
 * Return: Void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_int - A function that prints string
 *
 * @args: string to be printed
 *
 * Return: Void
 */
void print_str(va_list args)
{
	char *str;

	str = va_arg(args, char*);
	str == NULL ? printf("(nil)") : printf("%s", str);
}

/**
 * print_all - A function that prints anything
 *
 * @format: format of input string
 *
 * Return: Returns all strings, else 0.
 */
void print_all(const char * const format, ...)
{
	int i:
	int j;
	va_list args;

	type check[] = {
		{"c", print_char},
		{"i", printf_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(args, format);

	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (check[j].ftype != NULL)
		{
			if (*check[j].ftype == format[i])
			{
				(check[j].f)(args);
				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
			}
			j = j + 1;
		}
		i = i + 1;
	}
	va_end(args);
	printf("\n");
}
