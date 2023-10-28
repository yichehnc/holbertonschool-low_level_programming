#include "main.h"

/**
 * _strstr -finds the first occurrence of substring needle in the haystack
 *
 * @haystack: string to be searched
 * @needle: substring to be searched for
 *
 * Return: pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	if (needle[i] == 0)
	{
		return (haystack);
	}
	while (haystack[i] != '\0')
	{
		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
			{
				return (haystack);
			}
			i = i + 1;
		}
		haystack = haystack + 1;
	}
	return ('\0');
}
