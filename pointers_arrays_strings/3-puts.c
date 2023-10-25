#include "main.h"

/**
 * _puts - A function that prints a string, followed by a new line.
 *
 * @str: Input string
 *
 * Return: 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
