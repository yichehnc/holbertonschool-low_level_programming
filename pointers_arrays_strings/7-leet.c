#include "main.h"

/**
 * *leet - A function that encodes a string into 1337.
 *
 * @s: input string
 *
 * Return: output string.
 */
char *leet(char *s)
{
	int i;
	int j;
	char src[] = "aAeEoOtTlL";
	char dest[] = "4433007711";

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (*(s + i) == *(src + j))
			{
				*(s + i) = *(dest + j);
				break;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (s);
}
