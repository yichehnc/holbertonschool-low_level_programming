#include "main.h"

/**
 * *_strchr - A function that locates a character in a string.
 *
 * @s: string to search for
 * @c: character to search for
 *
 * Return: Pointer to first char.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s = s + 1;
	}
	return ('\0');
}
