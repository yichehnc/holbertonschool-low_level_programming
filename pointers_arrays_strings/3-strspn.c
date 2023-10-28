#include "main.h"

/**
 *_strspn - A function that gets the length of a prefix substring
 *
 *@s: the bytes of initial segment
 *@accept: string to match
 *
 *Return: number of bytes in the  s which consist of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
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
				break;
			}
			j = j + 1;
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
		i = i + 1;
	}
	return (i);
}
