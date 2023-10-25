#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 *
 * @s: the string to print
 *
 * Return: 0.
 */
void print_rev(char *s)
{
	char *len;

	len = s;
	while (*len != '\0')
	{
		len = len + 1;
	}
	len = len - 1;
	while (len >= s)
	{
		_putchar(*len);
		len = len - 1;
	}
	_putchar('\n');
}
