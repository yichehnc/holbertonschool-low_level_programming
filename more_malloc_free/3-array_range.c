#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - A function that creates an ordered array of integers
 *
 * @min: minimum value of ints in the array
 * @max: maximum value of ints in the array
 *
 * Return: pointer to the array, NULL if min > max
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(*array) * (max - min + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (min <= max)
	{
		array[i] = min;
		min = min + 1;
		i = i + 1;
	}
	return (array);
}
