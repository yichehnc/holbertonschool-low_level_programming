#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - A function that finds the length of a string
 *
 * @s: string whose length is to be found
 *
 * Return: string length
 */
unsigned int str_len(char *s)
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
 * string_nconcat - A function that concatenates two strings.
 *
 * @s1: string 1 to be concatenated
 * @s2: string 2 to be concatenated
 * @n: number of bytes of s2
 *
 * Return: pointer to newly allocated memory space or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, k, s2_len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s2_len = n;

	if (n >= str_len(s2))
	{
		s2_len = str_len(s2);
	}
	concat = malloc(str_len(s1) + s2_len + 1);
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
	while (j < s2_len)
	{
		concat[k] = s2[j];
		j = j + 1;
		k = k + 1;
	}
	concat[k] = '\0';
	return (concat);
}
