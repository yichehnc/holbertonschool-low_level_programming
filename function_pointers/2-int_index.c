#include <stdio.h>
#include <stdlib.h>
#include "function_pointer.h"

/**
 * int_index - A function that searches for an integer
 *
 * @cmp: pointer to the function used to compare values
 * @array: input array
 * @size: size of the array
 *
 * Return: Returns -1 if no elements match or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		if ((cmp)(array[i]) == 0)
		{
			i = i + 1;
		}
		else
		{
			return (i);
		}
	}
	return (-1);
}
