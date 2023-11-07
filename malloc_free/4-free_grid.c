#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2D grid previously created.
 *
 * @grid: 2D grid array
 * @height: height of array
 *
 * Return: NULL if width or height is 0, else returns a 2D array of ints.
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
	/* iterates over the rows and frees the memory for each row*/
		free(grid[i]);
		i = i + 1;
	}
	/* free the memory for the array of pointers that point to individual rows*/
	free(grid);
}
