#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an arrayof chars, and
 * initialisesit with a specific char.
 *
 * @size: size of array from main
 * @c: input char
 *
 * Return: NULL if size is 0 or returns a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size);

	if (size == 0 || p == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		p[i] = c; /* initialize the array */
		i = i + 1;
	}
	return (p);
}
