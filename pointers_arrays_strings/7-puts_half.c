#include "main.h"

/**
 * puts_half - A function that prints every other character of a string.
 *
 * @str: input string
 *
 * Return: prints the second half of the string.
 */
void puts_half(char *str)
{
	int i;
	int len;

	len = 0;
	while (str[len])
	{
		len = len + 1;
	}

	i = (len + 1) / 2;
	while (i < len)
	{
		_putchar(str[1]);
		i = i + 1;
	}
	_putchar('\n');
}
