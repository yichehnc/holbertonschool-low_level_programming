#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - A function that allocates memory for an array using malloc
 *
 * @nmemb: given array
 * @size: number of elements in array
 *
 * Return: NULL is nmemb or size 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < nmemb * size)
	{
		array[i] = 0;
		i = i + 1;
	}
	return (array);
}
