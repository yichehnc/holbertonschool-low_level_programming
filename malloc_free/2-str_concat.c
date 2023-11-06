#include "main.h"
#include <stdlib.h>

/**
 * str_len - A function that finds the length of a string
 *
 * @s: string length is to be found
 *
 * Return: string length
 */
int str_len(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x = x + 1;
	}
	return (x);
}

/**
 * str_concat - A function that concatenates two strings
 *
 * @s1: string 1 to be concatenated
 * @s2: string 2 to be concatenated
 *
 * Return: NULL if failure, else concatenation of s1 and s2.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	concat = malloc(str_len(s1) + str_len(s2) + 1);
	i = 0;
	j = 0;
	k = 0;

	if (concat == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		concat[k] = s1[i];
		i = i + 1;
		k = k + 1;
	}
	while (s2[j] != '\0')
	{
		concat[k] = s2[j];
		j = j + 1;
		k = k + 1;
	}
	concat[k] = '\0';
	return (concat);
}
