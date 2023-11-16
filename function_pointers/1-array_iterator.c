#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that executes a fucntion given
 * as a parameter on each element of an array
 *
 * @action: pointer to the function you need to use
 * @array: input array
 * @size: size of the array
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	i = 0;

	while (i < size)
	{
		action(array[i]);
		i = i + 1;
	}
}
