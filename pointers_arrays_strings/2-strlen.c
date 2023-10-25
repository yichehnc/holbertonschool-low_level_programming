#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 *
 * @s: Input string
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	while (*s != '\0')
	{
		s = s + 1;
		n = n + 1;
	}
	return (n);
}
