#include "main.h"

/**
 * *_strncat - A function that concatenates two strings.
 *
 * @dest: string input value
 * @src: string input value
 * @n: length of src
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i = i + 1;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i = i + 1;
		j = j + 1;
	}
	return (dest);
}
