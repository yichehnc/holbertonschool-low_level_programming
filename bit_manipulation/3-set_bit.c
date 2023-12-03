#include <stdio.h>
#include "main.h"

/**
 * set_bit - Sets a value of a bit to 1
 *
 * @n: Input number
 * @index: Bit position
 *
 * Return: Returns 1 if successful, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = 1;

	if (index > (sizeof(*n) * 8))
	{
		return (-1);
	}
	*n = *n | (i << index);
	return (1);
}
