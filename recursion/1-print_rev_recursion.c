#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse.
 *
 * @s: input array
 *
 * Return: reversed string.
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
