#include "main.h"
/**
 * _strlen_recursion - A function that returns length of string.
 *
 * @s: pointer to first char in string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
