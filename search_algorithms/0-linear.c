#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - searches for a value in an integer array using a linear
 * search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if ((array == NULL) || (size == 0))
	{
		return (-1);
	}

	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}

		i++;
	}

	return (-1);
}
