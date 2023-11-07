#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to
 * a 2 dimensional array of integers.
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL if width or height is 0, else returns a 2D array of ints
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **array; /* deref, to retrieve value from mem pointed to by ptr*/

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
		/* free memory of previously allocated row to avoid memory leaks*/
				free(array[j]);
				j = j + 1;
			}
			free(array);
			return (NULL);
		}
		/* if malloc succeed, func initialize all to 0 and iterate each row and col*/
		j = 0;
		while (j < width)
		{
		/* pointer to access element at i-th row and j-th col*/
			array[i][j] = 0;
			j = j + 1;
		}
		i = i + 1;
	}
	return (array);/* returns a pointer to the newly created 2D array*/
}
