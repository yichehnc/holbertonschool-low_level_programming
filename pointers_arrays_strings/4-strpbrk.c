#include "main.h"

/**
 *_strpbrk - A function that searches a string for any of a set of bytes.
 *
 *@s: string to be evalauted
 *@accept: string to match
 *
 *Return: A pointer to byte in s, NULL if no byte found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return ('\0');
}
