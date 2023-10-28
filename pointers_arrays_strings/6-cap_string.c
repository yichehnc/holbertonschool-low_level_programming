#include "main.h"

/**
 * *cap_string - A function that captilizes all words of a string.
 *
 * @s: input string
 *
 * Return: string with capitalized first letters.
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0)
		{
			if ((s[i] >= 'a') && (s[i] <= 'z'))
			{
				s[i] = s[i] - 'a' + 'A';
			}

		}
		else if (s[i] == ' ' || s[i] == '\t'
			|| s[i] == '\n' || s[i] == '.')
		{
			if ((s[i + 1] >= 'a') && (s[i + 1] <= 'z'))
			{
				s[i + 1] = s[i + 1] - 'a' + 'A';
			}
		}
		i = i + 1;
	}
	return (s);
}
