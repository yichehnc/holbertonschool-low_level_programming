#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 *
 * @b: integer for memory to be allocated to
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
